#pragma once
#include <iostream>

using namespace std;


template<typename T> struct Node {
	int value;
	Node* next;
};


template<typename T> class Queue
{
	Node<T>* root = nullptr;
public:

	Queue() {}

	~Queue() {
		clear();
	}
	void clear() {
		while (!empty())
			dequeue();
	}
	bool empty() {
		return root == nullptr;
	}

	// додавання узла в кінець списку

	void enqueue(T _value) {

		Node<T>* new_node = new Node<T>;
		new_node->value = _value;
		new_node->next = nullptr;

		if (empty()) {
			root = new_node;
		}
		else
		{
			Node<T>* last = root;
			while (last->next != nullptr)
				last = last->next;
			last->next = new_node;
		}

	};

	// видалення узла з голови списку
	T dequeue() {
		int result = root->value;
		Node<T>* current = root;
		root = root->next;
		delete current;
		return result;
	}

	void print()
	{
		if (root == nullptr)
			cout << "List is empty!" << endl;
		else
		{
			Node<T>* current = root;
			while (current != nullptr)
			{
				cout << current->value << " . ";
				current = current->next;
			}
			cout << endl;
		}
	}

	int get_length() {
		int length = 0;
		Node<T>* current = root;
		while (current != nullptr)
		{
			length++;
			current = current->next;
		}
		return length;
	}

};