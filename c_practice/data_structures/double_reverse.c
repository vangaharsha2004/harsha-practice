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
void reverse(){
	struct node *ptr1=head;
	struct node *ptr2=ptr1->next;

	ptr1->next=NULL;
	ptr1->prev=ptr2;

	while(ptr2!=NULL){
		ptr2->prev=ptr2->next;
		ptr2->next=ptr1;
		ptr1=ptr2;
		ptr2=ptr2->prev;
	}
	head=ptr1;
}
void print(){
	temp=head;
	while(temp!=NULL){
		printf("->%d",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

int main(){
	int value;
	for(int i=0;i<5;i++){
		printf("enter the value :");
		scanf("%d",&value);
		creating_node(value);
	}
	reverse();
	print();
	return 0;
}
