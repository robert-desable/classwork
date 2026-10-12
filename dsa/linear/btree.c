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
  printf("%d L/R of %d? (1/0) ",k,q->key);
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
  printf("%d ",&r->key);
  inorder(r->right);
 }
}

//write the number of nodes in a btree or bstree
int countNode(NODE* r){
	if(!r)
		return 0;
	return 1 + countNode(r->left) + countNode(r->right);
}

//input a key val and find it in the bstree
int searchBST(int key){
	NODE *r = root;
	while(r){
		if(r->key==key) return 1;
		if(key<r->key) r=r->left;
		else r=r->right;
	}
	return 0;
}

//write a recursive function to count the number of leaf nodes in btree or bstree
int countLeafNode(NODE *r){
	if(!r->right && !r->left)
		return 1;
	return countNode(r->left) + countNode(r->right);
}

//recursive function to calculate non leaf nodes
int countNonLeafNode(NODE *r){
	if(!r->right && !r->left)
		return 0;
	return 1 + countNode(r->left) + countNode(r->right);
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
 
 printf("\nNumber of nodes: %d\t",countNode(root));
 printf("\nNumber of leaf nodes: %d\t",countLeafNode(root));
 printf("\nNumber of non leaf nodes: %d\t",countNonLeafNode(root));
 return 0;
}
