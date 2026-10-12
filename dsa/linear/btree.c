#include <stdio.h>
#include <stdlib.h>

typedef struct Tree{
	int key;
	struct Tree *left, *right;
}NODE;

NODE *root = NULL;

//create BT
void createNode(int k){
	NODE *p=(NODE*)malloc(sizeof(NODE)),*q=root,*r;
	int ch;
	p->key;
	p->left=p->right=NULL;
	if(!root){
	 root=p;
	 return;
 }
 while(q){
  r=q;
  print("%d L/R of %d? (1/0) ",k,q->key);
  scanf("%d",&ch);
  if(ch) q=q->left;
  else q=q->right;
 }
 if(ch) r->left=p;
 else r->right=p;
}

//create BST
void createNodeBST(int k){
	NODE *p=(NODE*)malloc(sizeof(NODE)),*q=root,*r;
	int ch;
	p->key;
	p->left=p->right=NULL;
	if(!root){
	 root=p;
	 return;
 }
 while(q){
  r=q;
  if(k<q->key) q=q->left;
  else q=q->right;
 }
 if(k<r->key) r->left=p;
 else r->right=p;
 printf("%d",r->key);
}

//inorder
void inorder(NODE *r){
 if(r){
  inorder(r->left);
  printf("%d ",r->key);
  inorder(r->right);
 }
}

int main(){
 createNodeBST(6);
 createNodeBST(8);
 createNodeBST(9);
 createNodeBST(4);
 createNodeBST(3);
 createNodeBST(1);
 createNodeBST(7);
 inorder(root);
 return 0;
}
