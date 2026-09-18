#include<stdio.h>
	
	void push(int k){
  		NODE* p = (NODE*)malloc(sizeof(NODE));
  		p->key=k;
		p->next=head; //links the previous head NODE
		head=p; //links head and new NODE
	}

	int pop(){
  		if(head==NULL)
		return 0;
		NODE* p=head;
  		int k=p->key;
  		head=p->next;
    		p->next=NULL; //handling dangling
		free(p);
  		printf("\n%d is popped.\n",k);
		return 1;
	}
	
	void traverse(){
  		NODE *p=head;
  		while(p){
    		  printf("%d\n",p->key);
    		p=p->next;
		}
  	}

	int main()
	{
		int c=1,ele,f=1;
		while(f){
			printf("\nEnter choice:\n1 to push\n2 to pop\n3 to print current stack\nAnything else to exit:\n");
			scanf("%d",&c);
			switch(c){
				case 1: printf("\n Element to be push: ");
					scanf("%d",&ele);
					push(ele);
					break;
				case 2: if(!pop())
					printf("\nStack empty, faggot. ");
					break;
				case 3: traverse();
					break;
				default: f=0; printf("\nFinal stack:\n");
					 traverse();
			}
		}
	}