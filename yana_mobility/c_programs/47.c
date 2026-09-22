#include<stdio.h>
#include<stdlib.h>

struct node{

	int data;
	struct node *left;
	struct node *right;
};

struct node *root = NULL;

struct node* create(){

	int data;

	printf("enter data(-1 for no node): ");
	scanf("%d",&data);

	if(data == -1){
		return NULL;
	}
	
	struct node *temp = NULL;
	temp = (struct node *)malloc(sizeof(struct node));
	temp->data = data;

	printf("enter left child of %d:\n",data);
	temp->left = create();

	printf("enter right child of %d:\n",data);
	temp->right = create();

	return temp;
}

void preorder(struct node *root){

	if(root == NULL){
		return;
	}
	printf("%d ",root->data);
	preorder(root->left);
	preorder(root->right);
}

void inorder(struct node *root){

	if(root == NULL){
		return;
	}
	inorder(root->left);
	printf("%d ",root->data);
	inorder(root->right);
}

void postorder(struct node *root){

	if(root == NULL){
		return;
	}
	postorder(root->left);
	postorder(root->right);
	printf("%d ",root->data);
}
int main(){

	printf("creating binary tree\n");

	root = create();

	printf("preorder: ");
	preorder(root);

	printf("\ninorder: ");
	inorder(root);

	printf("\npostorder: ");
	postorder(root);

	printf("\n");

	return 0;
}
