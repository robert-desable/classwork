#ifndef INCLUDE_HEADERS_LINKEDLIST_H
#define INCLUDE_HEADERS_LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>


typedef struct ListNode{
  int key;
  struct ListNode* next;
}NODE;

extern NODE* head; 

void insert(int k);
void insertFirst(int k);
void insertPos(int k, int pos);
int deleteLast();
int deleteFirst();
int deletePos(int pos);
void display();

#endif
