#include <iostream>
#include "Array.h"

namespace n {

	array::array()
	{
	}

	array::array(const std::initializer_list<int>& ilist)
	{

		size_t i = 0;
		for (auto iter = ilist.begin(); iter != ilist.end(); iter++)
		{

			m_elements[i] = *iter;
			i++;

		}

	}

	int& array::operator[](size_t position)
	{
		return m_elements[position];
	}

	const int& array::operator[](size_t position) const
	{
		return m_elements[position];
	}

	int& array::at(size_t position)
	{
		return m_elements[position];
	}

	const int& array::at(size_t position) const
	{
		return m_elements[position];
	}

	int& array::front()
	{
		return m_elements[0];
	}

	int& array::back()
	{
		return m_elements[m_size - 1];
	}

	int* array::data()
	{
		return m_elements;
	}

	void array::fill(int value)
	{

		for (int i = 0; i < m_size; i++)
		{

			m_elements[i] = value;

		}

	}

	void array::swap(array& other)
	{

		n::array temp;
		for (int i = 0; i < other.m_size; i++)
		{

			temp[i] = other[i];
			other[i] = m_elements[i];
			m_elements[i] = temp[i];

		}
	}

	bool array::empty() const
	{
		return false;
	}

	size_t array::size() const
	{
		return m_size;
	}

}