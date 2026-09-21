#include <stdio.h>
#include <stdlib.h>
#include "headers/doublylinkedlist.h"

int main(){
 int k=0;
  insertLast(4);
  insertLast(10);
  insertFirst(2);
  insertFirst(3);
  display();
  k=deletePos(2);
  printf("\n%d\n",k);
  display();
 return 0;
}
