#pragma once
#include <initializer_list>

namespace n
{
	template<typename T, size_t Size>
	class array
	{
	public:
		array();
		array(const std::initializer_list<T>& ilist) {
			size_t i = 0;
			for (auto iter = ilist.begin(); iter != ilist.end(); iter++)
			{
				m_elements[i] = *iter;
				i++
			};
		}

		T& operator [] (size_t position) { return m_elements[position] };
		const T& operator [] (size_t position)const { return m_elements[position] };
		T& at(size_t position) { return m_elements[position]; }
		const T& at(size_t position) const { return m_elements[position]; }

		T& front() {
			return m_elements[0];
		}
		T& back() { return m_elements[m_size - 1]; }

		T* data() { return m_elements };

		void fill(T value) {
			for (int i = 0; i < m_size; i++) {
				m_elements[i] = value;
			}
		}
		void swap(array& other) {
			for (size_t i = 0; i < other.m_size; i++) {
				auto temp = other[i];
				other[i] = m_elements[i];
				m_elements[i] = temp;
			}
		};
		bool empty() const {
			for (size_t i = 0; i < m_size; i++) {
				if (m_elements[i] != NULL) {
					return false;
				}
			}
		}
		size_t size() const {
			return m_size;
		}

	private:
		size_t m_size = Size;
		T m_elements[Size]{};
	};
}