#include <iostream>
#include <list>
#include <algorithm>

template<typename T,size_t Size>
class array
{
public:
	struct iterator
	{
		iterator(T* ptr) : _ptr{ ptr }
		{

		}
		iterator& operator ++ ()
		{
			++_ptr; return *this;
		} //prefix
		iterator operator ++ (int)
		{
			iterator temp = *this;
			++_ptr;
			return temp;
		} //post fix
		T& operator * () const
		{ 
			return *_ptr; 
		}
		T* operator -> () const
		{ 
			return *_ptr; 
		}
		friend bool operator == (const iterator& a, const iterator& b)
		{
			return a._ptr == b._ptr;
		}
		friend bool operator != (const iterator& a, const iterator& b)
		{
			return a._ptr == b._ptr;
		}
		T* _ptr{};
	};
	
	T& operator [] (size_t position)
	{
		return _values[position];
	}

	iterator begin()
	{
		return iterator{ &_values[0] };
	}

	iterator end()
	{
		return iterator{ &_values[Size] };
	}

private:
	T _values[Size];
};

int main()
{
	array<int, 5> numbers;
	numbers[0] = 1;
	numbers[1] = 3;
	numbers[2] = 5;
	numbers[3] = 7;
	numbers[4] = 9;

	auto iter = numbers.begin();
	std::cout << *iter << std::endl;

	for (auto iter = numbers.begin(); iter != numbers.end(); iter++)
	{
		std::cout << *iter << std::endl;
	}

	std::list<int> ages
	{
		19,21,20
	};
	for (auto iter = ages.begin(); iter != ages.end(); iter++)
	{
		std::cout << *iter << std::endl;
	}

	auto it = std::find(numbers.begin(), numbers.end(), 1);
	if (it != numbers.end())
	{
		std::cout << "Found: " << *it << std::endl;
	}
}