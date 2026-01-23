#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *prev;
	int data;
	struct node *next;
};

struct node *head=NULL;
struct node *tail=NULL;
struct node *temp=NULL;

void creating_node(int value){
	tail=(struct node *)malloc(sizeof(struct node));
	tail->prev=NULL;
	tail->data=value;
	tail->next=NULL;

	if(head==NULL){
		head=tail;
	}
	else{
		temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=tail;
		tail->prev=temp;
	}
}
void print(){
	temp=head;
	while(temp!=NULL){
		printf("->%d",temp->data);
		temp=temp->next;
	}
}
int main(){
	int value;
	while(1){
		printf("enter the value :");
		scanf("%d",&value);
		if(value==-1){
			break;
		}
		else{
			creating_node(value);
		}
	}
	print();
	printf("\n");
	return 0;
}
