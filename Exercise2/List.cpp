//
//  List.cpp
//  Task1
//
//  Created by Денис  on 03.11.2024.
//

#include <stdio.h>
#include "List.h"
#include <iostream>
using namespace std;


#include "List.h"
#include <iostream>
using namespace std;

// Print all elements in the list
void printList(List lst) {
    ListElem* current = lst;
    while (current != nullptr) {
        cout << current->info << " ";
        current = current->next;
    }
    cout << endl;
}

// Insert an element at the end of the list
void insertLast(List& lst, int info) {
    ListElem* newElem = new ListElem{info, nullptr};
    if (lst == nullptr) {
        lst = newElem;
    } else {
        ListElem* current = lst;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newElem;
    }
}

// Reverse the list in place
void reverseList(List& lst) {
    ListElem* prev = nullptr;
    ListElem* current = lst;
    while (current != nullptr) {
        ListElem* nextElem = current->next;
        current->next = prev;
        prev = current;
        current = nextElem;
    }
    lst = prev;
}

// Get the length of the list
int listLength(List lst) {
    int length = 0;
    ListElem* current = lst;
    while (current != nullptr) {
        length++;
        current = current->next;
    }
    return length;
}

// Insert an element at the beginning of the list
void insertElem(List& lst, int info) {
    ListElem* newElem = new ListElem{info, lst};
    lst = newElem;
}

// Remove an element from the beginning of the list
bool removeElem(List& lst, int& info) {
    if (lst == nullptr) {
        return false;
    }
    ListElem* toDelete = lst;
    info = toDelete->info;
    lst = lst->next;
    delete toDelete;
    return true;
}

// Search for an element in the list by value
ListElem* searchElem(List lst, int info) {
    ListElem* current = lst;
    while (current != nullptr) {
        if (current->info == info) {
            return current;
        }
        current = current->next;
    }
    return nullptr;
}
