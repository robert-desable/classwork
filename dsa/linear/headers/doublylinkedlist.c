#include "doublylinkedlist.h"

void insertLast(int k){
	NODE *p=(NODE*)malloc(sizeof(NODE)), *q = head;
	p->key=k;
	p->next=NULL;
	if(!head){
 	head=p; 
 	p->prev=NULL;
 	return;
	}
	while(q->next) q=q->next;
	q->next=p;
	p->prev=q;
}

void insertFirst(int k){
	NODE *p=(NODE*)malloc(sizeof(NODE));
	p->key=k;
	p->prev=NULL;
	p->next=head;
	head->prev=p;
	head=p;
}

void insertPos(int k, int pos){
	NODE *p=(NODE*)malloc(sizeof(NODE)), *q = head;
	int i;
	p->key=k;
	for(i=0;i<pos-1;i++) q=q->next;
	p->prev=q;
	p->next=q->next;
	q->next->prev=p;
	q->next=p;
}

int deletePos(int pos){
 NODE *p = head,*q;
 int i,k;
 for(i=1;i<pos-1;i++) p=p->next;
 q=p->next;
 k=q->key;
 q->next->prev=p;
 p->next=q->next;
 q->next=NULL;
 q->prev=NULL;
 free(q);
 return k;
}

void display(){
	NODE *p = head;
	while(p){
 	printf("%d\t",p->key); 
  p=p->next;
	} 
}
