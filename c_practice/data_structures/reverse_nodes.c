#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
struct node *head=NULL;
struct node *tail=NULL;
struct node *temp=NULL;

void creating_node(int value){
	tail=(struct node *)malloc(sizeof(struct node));
	tail->data=value;
	tail->link=NULL;

	if(head==NULL){
		head=tail;
	}
	else{
		temp=head;
		while(temp->link!=NULL){
			temp=temp->link;
		}
		temp->link=tail;
	}
}
void reversing(){
	struct node *ptr1=NULL;
	struct node *ptr2=NULL;

	while(head!=NULL){
		ptr2=head->link;
		head->link=ptr1;
		ptr1=head;
		head=ptr2;
	}
	head=ptr1;
}

void print(){
	temp=head;
	while(temp!=NULL){
		printf("->%d",temp->data);
		temp=temp->link;
	}
}
int main(){
	int value;
	for(int i=0;i<5;i++){
		printf("enter the value :");
		scanf("%d",&value);
		creating_node(value);
	}
	printf("before reversing:\n");
	print();
	printf("\n");

	reversing();

	printf("after reversing :\n");
	print();
	printf("\n");

	return 0;
}
