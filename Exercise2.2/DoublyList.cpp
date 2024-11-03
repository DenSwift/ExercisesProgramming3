//
//  DoublyList.cpp
//  Task1
//
//  Created by Денис  on 03.11.2024.
//

#include "DoublyList.hpp"

void initializeDList(DList & dl) {
    dl.head = nullptr;  // Set the head pointer to null
    dl.tail = nullptr;  // Set the tail pointer to null
}

void put(DList& dl, int val) {
    DListElem *newElem = new DListElem{val};

    // If the list is empty
    if (dl.head == nullptr) {
        dl.head = newElem;
        dl.tail = newElem;
    } else {
        // If the list is not empty adjust the pointers
        newElem->next = dl.head; // Set the next of the new element to the current head
        dl.head->prev = newElem; // Set the previous of the current head to the new element
        dl.head = newElem; // Update head to point to the new element
    }
}

bool get(DList& dl, int &val) {
    if (dl.head == nullptr) {
        return false;
    } else {
        // Store the value of the last element
        val = dl.tail->info;

        // Temporary pointer to the last element
        DListElem* toDelete = dl.tail;

        // Adjust pointers
        if (dl.tail->prev != nullptr) {
            dl.tail = dl.tail->prev; // Move the tail pointer to the previous element
            dl.tail->next = nullptr;  // Set the next of the new tail to null
        } else {
            // If there was only one element
            dl.head = nullptr; // The list is now empty
            dl.tail = nullptr; // Update tail to null
        }

        // Delete the last element
        delete toDelete;
        
        return true;
    }
}

bool isEmpty(DList dl) {
    if (dl.head == nullptr || dl.tail == nullptr) {
        return true;
    }
    return false;
}
