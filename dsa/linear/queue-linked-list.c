#include<stdio.h>
#include "headers/linkedlist.h"	

	int main()
	{
		int c=1,ele,f=1;
		while(f){
			printf("\nEnter choice:\n1 to enqueue\n2 to dequeue\n3 to print current list\nAnything else to exit:\n");
			scanf("%d",&c);
			switch(c){
				case 1: printf("\n Element to be enqueued: ");
					scanf("%d",&ele);
					insert(ele);
					break;
				case 2: if(!head)
					printf("\nQueue empty, faggot. ");
          else printf("%d\t",deleteFirst());
					break;
				case 3: display();
					break;
				default: f=0; printf("\nFinal queue:\n");
					 display();
		}
	}
}
