#include <iostream>
#include <memory>

#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

template<typename T>
class smart_ptr
{
public:
    smart_ptr(T* ptr = nullptr) : _ptr{ ptr } {}
    smart_ptr(const smart_ptr&) = delete;
    smart_ptr& operator = (const smart_ptr&) = delete;
    ~smart_ptr() { if (_ptr) delete _ptr; }

    T& operator * () { return *_ptr; }
    T* operator & () { return  _ptr; }
    T* operator -> () { return  _ptr; }
    T* get() { return _ptr; }

private:
    T* _ptr{};
};

class ref_count
{
public:
    ref_count() {}
    ref_count(const ref_count&) = delete;
    ref_count& operator = (const ref_count&) = delete;

    size_t inc() { return ++_count; }
    size_t dec() { return --_count; }
    size_t count() { return _count; }

private:
    size_t _count{};
};


template<typename T>
class ref_smart_ptr
{
public:
    ref_smart_ptr(T* ptr) : _ptr{ ptr }, _ref{ new ref_count() } { _ref = new ref_count;  _ref->inc(); }
    ref_smart_ptr(const ref_smart_ptr& other)
    {
        _ptr = other._ptr;
        _ref = other._ref;
        _ref->inc();
    }
    ref_smart_ptr& operator = (const ref_smart_ptr& other)
    {
        if (this != &other)
        {
            if (_ref->dec() == 0)
            {
                delete _ptr;
                delete _ref;
            }

            _ptr = other._ptr;
            _ref = other._ref;
            _ref->inc();
        }

        return *this;
    }
    ~ref_smart_ptr()
    {
        if (_ref->dec() == 0)
        {
            std::cout << "destroyed: " << *_ptr << std::endl;
            delete _ptr;
            delete _ref;
        }
    }

    T& operator *  () { return *_ptr; }
    T* operator &  () { return  _ptr; }
    T* operator -> () { return  _ptr; }
    T* get() { return _ptr; }

    size_t use_count() { return _ref->count(); }

private:
    T* _ptr{};
    ref_count* _ref{};
};
int main()
{
    int* p = new int{ 5 };
    std::cout << *p << std::endl;
    delete p;

    {
        smart_ptr<int> sp(new int{ 7 });

        std::unique_ptr<int> up{ new int{9} };
    }

    {

        ref_smart_ptr<int> rsp(new int{ 10 });

        std::cout << rsp.use_count() << std::endl;
        {

            ref_smart_ptr<int> rspc(rsp);
            std::cout << rsp.use_count() << std::endl;

        }

        std::cout << rsp.use_count() << std::endl;

        std::shared_ptr<int> shp(new int{ 12 });
        std::shared_ptr<int> shpc;
        shpc = shp;

    }

    _CrtDumpMemoryLeaks();
}