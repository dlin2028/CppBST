#pragma once

template<typename T>
Tree<T>::Node()
{
	head = nullptr;
}
template<typename T>
Tree<T>::Insert(T item)
{
	Node<T>* curr;
	while (true)
	{
		if (item > head.item)
		{
			if (head.LeftNode)
			{
				curr = head.leftNode;
				continue;
			}
		}
		else
		{
			if (head.RightNode)
			{
				curr = head.leftNode;
				continue;
			}
		}
	}
}
template<typename T>
Tree<T>::Delete(T item)
{

}