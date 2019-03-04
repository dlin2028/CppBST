#pragma once

template<typename T>
class Node
{
public:
	Node<T>();
	~Node<T>();

	T Item;
	unique_ptr<Node<T>> LeftNode;
	unique_ptr<Node<T>> RightNode;
};

#include "Node.hpp"