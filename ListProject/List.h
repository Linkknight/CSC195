#pragma once
#include <initializer_list>
#include <limits>
#include <iostream>

namespace nc
{
	template<typename T>
	class list
	{
		struct node_t
		{
			node_t(const T& value) : _value{ value } {}

			T _value;
			node_t* _next{ nullptr };
			node_t* _prev{ nullptr };
		};

	public:
		list() {}
		list(const std::initializer_list<T>& ilist);
		list(const list& other);
		~list();

		//list& operator = (const list& other);

		T& front()
		{
			return _head->_value;
		};

		const T& front() const
		{
			return _head->_value;
		};

		T& back()
		{
			return tail()->_value;
		}

		const T& back() const
		{
			return tail()->_value;
		}

		void push_front(const T& value);
		void pop_front();

		void push_back(const T& value);
		void pop_back();

		void remove(const T& value);
		void reverse(); // see references for implementation
		void resize(size_t count, const T& value = T{});
		void clear(); // search online for implementation

		bool empty() { return (size() == 0); }
		size_t size(); // see references for implementation
		size_t max_size() { return std::numeric_limits<size_t>::max(); }

		std::ostream& write(std::ostream& stream);

	private:
		node_t* tail();

	private:
		node_t* _head{ nullptr };
	};

	template<typename T>
	list<T>::list(const std::initializer_list<T>& ilist)
	{

	}

	template<typename T>
	list<T>::list(const list& other)
	{

	}

	template<typename T>
	list<T>::~list()
	{

	}

	template<typename T>
	void list<T>::push_front(const T& value)
	{
		node_t* new_node = new nose_t(value);
		if (_head)
		{
			_head->_prev = new_node;
		}
		new_node->_next = _head;
		_head = new_node;
	}

	template<typename T>
	void list<T>::pop_front()
	{
		if (_head)
		{
			node_t* temp_node = _head;
			_head = _head->_next;
			_head->_prev = nullptr;
			delete temp_node;
		}
	}

	template<typename T>
	void list<T>::push_back(const T& value)
	{

	}

	template<typename T>
	void list<T>::pop_back()
	{

	}

	template<typename T>
	typename list<T>::node_t* list<T>::tail()
	{
		node_t* node = _head;
		while (node && node->_next)
		{
			node = node->_next;
		}
		return node;
	}

	template<typename T>
	std::ostream& list<T>::write(std::ostream& stream)
	{
		node_t* node = _head;
		while (node)
		{
			stream << node->_value << " ";
			node = node->_next;
		}
		stream << std::endl;
		return stream;
	}
}
