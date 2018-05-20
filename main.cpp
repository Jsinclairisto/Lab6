#include <cstdlib>
#include <iostream>
#include <queue>
#include "ADTs\AvlNode.h"
#include "ADTs\AvlTree.h"
using namespace std;


int getHeight(BinaryNode<int>* node)
{

	if(node == nullptr)
	{
		return -1;
	}
	else if(node->isLeaf() == true)
	{
		return 0;
	}
	int left_height = getHeight(node->getLeftChild());
	int right_height = getHeight(node->getRightChild());
	if(left_height > right_height)
	{

		return 1 + left_height;

	}
	else
	{

		return 1 + right_height;

	}
}

bool isComplete(BinarySearchTree<int>* tree)
{
	queue<BinaryNode<int>*> to_visit{};
	bool has_seen_null = false;
	to_visit.push(tree->getRoot(1));

	while (to_visit.empty() == false)
	{

		BinaryNode<int>* front = to_visit.front();
		to_visit.pop();

		//Have we seen a null?
		if(front == nullptr)
		{

			has_seen_null = true;

		}
		else
		{
			//found a gap, therefore not complete
			if(has_seen_null == true)
			{

				return false;

			}
			to_visit.push(front->getLeftChild());
			to_visit.push(front->getRightChild());

		}

	}

	return true;


}

bool isFull(BinarySearchTree<int>* tree)
{

	queue<BinaryNode<int>*> to_visit{};
	bool has_seen_null = false;
	to_visit.push(tree->getRoot(1));

	while (to_visit.empty() == false)
	{

		BinaryNode<int>* front = to_visit.front();
		to_visit.pop();

		//Have we seen a null?
		if(front == nullptr)
		{

			has_seen_null = false;

		}
		else
		{
			//found a gap, therefore not full
			if(has_seen_null == false)
			{

				return true;

			}
			to_visit.push(front->getLeftChild());
			to_visit.push(front->getRightChild());
		}
	}
}

bool isAvl(BinarySearchTree<int>* root)
{

	getHeight();
	getBalanceFactor();

    if(root == nullptr)
    {
        return;
    }
    
    if(root < left.size())
    {
        return false;
    }
    
    if()
        
    isAvl(root->)
    
}

void rotateLeft(BinaryNode<T> *new_root)
{

if (root == nullptr)
		{
			return root;
		}

		AvlNode<T> *new_root = dynamic_cast<AvlNode<T> *>(root->getRightChild());
		root->setRightChild(new_root->getLeftChild());
		root = setHeight(dynamic_cast<AvlNode<T> *>(root));
		new_root->setLeftChild(root);
		return setHeight(new_root);
}


int main()
{
	
	rotateLeft();
	isAvl();
	isFull();
	isComplete();

	return 0;
}
