#ifndef INCLUDE_DOUBLYLINKEDLIST_H
#define INCLUDE_DOUBLYLINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode{
	int key;
	struct ListNode *next, *prev;
}NODE;

NODE *head;

void insertLast(int k);
void insertFirst(int k);
void insertPos(int k, int pos);
int deleteLast();
int deleteFirst();
int deletePos(int pos);
void display();

#endif
