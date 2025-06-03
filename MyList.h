#pragma once
#include <iostream>
using std::cout;
using std::endl;

namespace MyList {

	template <typename T>
	class Node {
	public:
		T info;
		Node* next;

		Node(T value) { info = value; next = nullptr; }
		void printNode()const {
			cout << "INFO: " << info << " SELF: " << this 
				<< " NEXT: " << next << endl;
		}
	};


	template <typename U>
	class List {
		Node<U>* head;
		Node<U>* tail;
	public:
		List() {
			head = tail = nullptr;
		}
		~List() {
			//empty
		}
		void push_back(U value) {

		}
	};

}