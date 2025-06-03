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
		void printNode()const {
			cout << "INFO: " << info << " SELF: " << this
				<< "\n\t PREV: " << prev 
				<< "\n\t NEXT: " << next << endl;
		}
	};
}