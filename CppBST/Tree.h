#pragma once

template<typename T>
class Tree
{
public:
	Tree<T>();
	~Tree<T>();

	Insert(T);
	Delete(T);

private:
	unique_ptr<Node<T>> head;
};

#include "Tree.hpp"