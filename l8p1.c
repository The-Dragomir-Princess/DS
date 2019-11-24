#include<stdio.h>
#include<stdlib.h>

struct BinaryTree
{
	int data;
	struct BinaryTree* left;
	struct BinaryTree* right;
};
	typedef struct BinaryTree BT;

BT* newnode(int data)
{
	BT* node=(BT*)malloc(sizeof(BT));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	
	return(node);
}

void PostOrder(BT* ptr)
{
	if(ptr==NULL)
		return;
	PostOrder(ptr->left);
	PostOrder(ptr->right);
	printf("%d ,",ptr->data);
}


void InOrder(BT* ptr)
{
	if (ptr==NULL)
		return;
	InOrder(ptr->left);
	printf("%d ,",ptr->data);
	InOrder(ptr->right);
}


void PreOrder(BT* ptr)
{

	if(ptr==NULL)
		return;
	
	printf("%d ,",ptr->data);
	PreOrder(ptr->left);
	PreOrder(ptr->right);
}

void main()
{
	BT* root;
	root= newnode(18);
	root->left=newnode(7);
	root->right=newnode(91);
	root->left->left=newnode(1);
	root->left->right=newnode(15);
	root->right->left=newnode(41);
	root->right->right=newnode(122);
	root->right->left->right=newnode(53);
	root->right->left->right->left=newnode(52);
	
	printf("\nPre-Order:");
	PreOrder(root);
	printf("\nIn-Order:");
	InOrder(root);
	printf("\nPost-Order:");
	PostOrder(root);
	printf("\n");
	
}
	
	
	
