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
				<< " NEXT: " << < next << endl;
		}
	};
}