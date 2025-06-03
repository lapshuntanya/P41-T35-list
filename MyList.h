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
			// 1- Створюємо вузол
			Node<U>* el = new Node<U>(value);

			//2 - Немає вузлів в списку
			if (head == nullptr) {
				head = tail = el;
			}
			else {
				//3-1 Прив'язуємо вузли
				tail->next = el;
				//3-2 Зсовуємо хвіст в кінець
				tail = el;
			}
		}
		void showList() {
			Node<U>* p = head;

			if (p == nullptr) cout << "List is empty!\n";
			else {
				while (p != nullptr) {
					p->printNode();
					p = p->next;
				}
			}
		}
	};

}