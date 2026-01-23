#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
int main(){
	struct node *head=(struct node *)malloc(sizeof(struct node));
	head->data=95;
	head->link=NULL;

	struct node *current=(struct node *)malloc(sizeof(struct node));
	current->data=12;
	current->link=NULL;

	head->link=current;

	current=(struct node *)malloc(sizeof(struct node));
	current->data=15;
	current->link=NULL;

	head->link->link=current;

	printf("%d %d %d\n",head->data,head->link->data,head->link->link->data);
	return 0;
}
