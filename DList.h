#pragma once
#include <iostream>
using std::cout;
using std::endl;

namespace MyList {

	template <typename T>
	class DNode {
	public:
		T info;
		DNode* next;
		DNode* prev;

		DNode(T value) { info = value; next = prev =  nullptr; }
		void printDNode()const {
			cout << "INFO: " << info << " SELF: " << this
				<< "\n\t PREV: " << prev 
				<< "\n\t NEXT: " << next << endl;
		}
	};

	template <typename U>
	class DList {
		DNode<U>* head;
		DNode<U>* tail;
	public:
		DList() {
			head = tail = nullptr;
		}
		~DList() {
			DNode<U>* p = tail;
			while (p != nullptr) {
				p = p->prev;
				if (p == nullptr) delete head;
				else delete p->next;
			}
			head = tail = nullptr;
		}
		void push_back(U value) {
			// 1- Створюємо вузол
			DNode<U>* el = new DNode<U>(value);

			//2 - Немає вузлів в списку
			if (head == nullptr) {
				head = tail = el;
			}
			else {
				//3-1 Прив'язуємо вузли
				tail->next = el;
				el->prev = tail;

				//3-2 Зсовуємо хвіст в кінець
				tail = el;
			}
		}

		void showList() {
			DNode<U>* p = head;

			if (p == nullptr) cout << "List is empty!\n";
			else {
				while (p != nullptr) {
					p->printDNode();
					p = p->next;
				}
			}
		}

		void show_reverse() {

		}

		DNode<U>* search(U value) { //Пошук вузла із заданим значенням
			return nullptr;
		}

	};
}