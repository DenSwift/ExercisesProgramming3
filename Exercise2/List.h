//
//  List.h
//  Task1
//
//  Created by Денис  on 03.11.2024.
//

#ifndef _LIST_H_
#define _LIST_H_

struct ListElem {
    int info;
    ListElem *next;
};

typedef ListElem* List;

const List emptyList = nullptr;

void printList(List lst);
void insertLast(List& lst, int info);
void reverseList(List& lst);
int listLength(List lst);
void insertElem(List& lst, int info);
bool removeElem(List& lst, int& info);
ListElem* searchElem(List lst, int info);

#endif


