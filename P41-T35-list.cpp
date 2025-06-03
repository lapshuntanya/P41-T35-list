#include "MyList.h"
#include "DList.h"
#include <string>

int main()
{
   /* int arr[4] = {6, 3, 9, -1};// arr[i]

    MyList::Node<int> first(6); //info =6, next = &3

    MyList::Node<int> second(3); //info = 3, next = &9
    first.next = &second;

    MyList::Node<int> third(9); //info = 9 next = &-1
    second.next = &third;

    MyList::Node<int> fourth(-1); //info = -1 next = nullptr
    third.next = &fourth;
    //----------------------------------------------------
    MyList::Node<int>* p = &first;
    while (p != nullptr) {
        p->printNode();
        p = p->next;
    }*/


    MyList::DList<std::string>  p41;
    p41.push_back("Цимбал Михайло");
    p41.push_back("Троневич Владислав");
    p41.push_back("Свєчкарьов Данііл");
    p41.push_back("Пономаренко Євген");
    p41.push_back("Нікітенко Максим");

    p41.showList();

    if (p41.search("Пономаренко Євген") == nullptr)
        cout << "not found!\n";
    else {
        p41.search("Пономаренко Євген")->printDNode();
    }

}

