#include<stdio.h>
	
	void enqueue(int k){
  		NODE* p = (NODE*)malloc(sizeof(NODE)), *q = head;
  		p->key=k;
  		p->next=NULL;
  		if(!head) { head=p; return; }
  		while (q->next) q=q->next; //finds the last NODE
  		q->next=p;
	}

	int dequeue(){
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
			printf("\nEnter choice:\n1 to enqueue\n2 to dequeue\n3 to print current list\nAnything else to exit:\n");
			scanf("%d",&c);
			switch(c){
				case 1: printf("\n Element to be enqueued: ");
					scanf("%d",&ele);
					enqueue(ele);
					break;
				case 2: if(!dequeue())
					printf("\nQueue empty, faggot. ");
					break;
				case 3: traverse();
					break;
				default: f=0; printf("\nFinal queue:\n");
					 traverse();
			}
		}
	}