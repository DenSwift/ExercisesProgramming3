//
//  DoublyList.hpp
//  Task1
//
//  Created by Денис  on 03.11.2024.
//

#ifndef DoublyList_hpp
#define DoublyList_hpp

#include <stdio.h>

struct DListElem {
    int info;
    DListElem * next;
    DListElem * prev;
};

struct DList {
    DListElem *head; // Pointer to the first element
    DListElem *tail; // Pointer to the last element
};

void initializeDList(DList & dl);
void put(DList& dl, int val);
bool get(DList& dl, int &val);
bool isEmpty(DList dl);

#endif
