#pragma once
#include <initializer_list>
#include <limits>

namespace nc
{
    template<typename T>
    class vector
    {
    public:
        vector() {}
        vector(size_t capacity);
        vector(const std::initializer_list<T>& ilist);
        vector(const vector& other);
        ~vector();

        vector& operator = (const vector& other);

        T& operator [] (size_t position);
        const T& operator [] (size_t position) const;

        T& at(size_t position);
        const T& at(size_t position) const;

        T& front();
        T& back();

        T* data();

        void push_back(const T& value);
        void pop_back();

        void reserve(size_t capacity);
        void resize(size_t new_size, const T& value = T{});
        void clear();

        void swap(vector& other);

        bool empty() const;
        size_t size() const;
        size_t capacity() const;
        size_t max_size() const { return std::numeric_limits<size_t>::max() / sizeof(T); }

    private:
        T* _elements{ nullptr };
        size_t _size{};
        size_t _capacity{};
    };
}
