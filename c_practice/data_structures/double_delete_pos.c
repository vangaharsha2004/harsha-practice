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
void deleting_pos(int pos){
	struct node *ptr1=head;
	struct node *ptr2=NULL;

	while(ptr1->next!=NULL){
		if(pos==1){
			break;
		}
		else{
			ptr2=ptr1;
			ptr1=ptr1->next;
			pos--;
		}
	}
	ptr2->next=ptr1->next;
	ptr1->next->prev=ptr2;
	free(ptr1);
	ptr1=NULL;
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
	deleting_pos(3);
	print();
	return 0;
}
