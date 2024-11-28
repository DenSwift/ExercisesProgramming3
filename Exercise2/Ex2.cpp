//
//  Ex2.cpp
//  Task1
//
//  Created by Денис  on 03.11.2024.
//

#include <iostream>
#include "List.h"
using namespace std;

int main() {
    List list1 = emptyList;

    for (int value = 1; value <= 10; value++) {
        insertLast(list1, value);
    }

    cout << "Original list:" << endl;
    printList(list1);

    reverseList(list1);

    cout << "Reversed list:" << endl;
    printList(list1);

    cout << "Press Enter to exit..." << endl;
    cin.ignore();
    return 0;
}


