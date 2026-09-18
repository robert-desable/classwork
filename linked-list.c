#include "linked-list.h"

void insert(int k){
  NODE* p = (NODE*)malloc(sizeof(NODE)), q = head;
  p->key=k;
  p->next=NULL;
  if(!head) { head=p; return; }
  while (q->next) q=q->next; //finds the last NODE
  q->next=p;
}

void insertFirst(int k){
  NODE* p = (NODE*)malloc(sizeof(p));
  p->key=k;
  p->next=head; //links the previous head NODE
  head=p; //links head and new NODE
}

void insertPos(int k, int pos){
  NODE* p= (NODE*)malloc(sizeof(p)), q = head;
  int i;
  p->key=k;
  for(i=1;i<pos-2;i++) q=q->next; //moves to prev NODE
  p->next = q->next; //links new NODE to next NODE
  q->next=p; //links new NODE and prev NODE
}

int delete(){
  NODE* p = head;
  int k;
  while(p->next->next) p=p->next; //moves point to penultimate NODE
  k=p->next->key; //copies the end NODEkey
  free(p->next); //free end NODE
  p->next=NULL; //handling dangling
  return k;
}

int deleteFirst(){
  NODE* p=head;
  int k=p->key;
  head=p->next;
  free(p);
  p->next=NULL; //handling dangling
  return k;
}

int deletePos(int pos){
  NODE* p = head,q;
  int i,k;
  for(i=1;i<pos-2;++) p=p->next; //moves pointer to prev
  q=p->next;
  k=q->key;
  p->next=q->next; //links prev to next
  free(q)
  q->next=NULL; //handling dangling
  return k;
}

void traverse(){
  NODE *p=head;
  while(p){
    printf("%d\n",p->key);
    p=p->next;
  }
}
