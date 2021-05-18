#include <iostream>

template<typename TValue>
class set
{
	struct node_t
	{
		node_t(const TValue& value) : _value{value}


		TValue _value;
		node_t* _left{};
		node_t* _right{};

	};

public:

	void insert(const TValue& value)
	{
		node_t* new_node = new node_t{ value };

		if (_root == nullptr)
		{
			_root = new_node;
		}
		else
		{
			node_t* node = _root;
			while (node)
			{
			
				if (value < node->_value)
				{
					if (node->_left == nullptr)
					{
						node->_left = new_node;
						break;
					}
					node = node->_left;
				}
				else
				{
					if (node->_right == nullptr)
					{
						node->_right = new_node;
						break;
					}
					node = node->_right;
				}
			}
		}
	}

	bool find(const TValue& value)
	{
		node_t* node = _root;
		while (node && node->_value != value)
		{
			node = (value < node->_value) ? node->_left : node->_right;
		}
		return node;
	}

private:
	node_t* root{};
};

template<typename TKey, typename TValue>
class map
{
	struct node_t
	{
		node_t(const TValue& value) : _value{ value }


		TValue _value;
		TValue _key;
		node_t* _left{};
		node_t* _right{};

	};

public:

	void insert(const TValue& value)
	{
		node_t* new_node = new node_t{ value };

		if (_root == nullptr)
		{
			_root = new_node;
		}
		else
		{
			node_t* node = _root;
			while (node)
			{

				if (value < node->_value)
				{
					if (node->_left == nullptr)
					{
						node->_left = new_node;
						break;
					}
					node = node->_left;
				}
				else
				{
					if (node->_right == nullptr)
					{
						node->_right = new_node;
						break;
					}
					node = node->_right;
				}
			}
		}
	}

	bool find(const TValue& value)
	{
		node_t* node = _root;
		while (node && node->_value != value)
		{
			node = (value < node->_value) ? node->_left : node->_right;
		}
		return node;
	}

private:
	node_t* root{};
};

//typedef unsigned int id_t;
using id_t = unsigned int;
int main()
{
	set<id_t> ids;
	ids.insert(20);
	ids.insert(10);
	ids.insert(30);
	ids.insert(25);


	std::cout << "Find(10): " << ids.find(10) << std::endl;
	std::cout << "Find(10): " << ids.find(25) << std::endl;
	std::cout << "Find(10): " << ids.find(35) << std::endl;

}