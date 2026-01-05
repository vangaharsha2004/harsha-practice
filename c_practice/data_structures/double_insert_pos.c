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
	temp=NULL;
}

void insert_pos(int value,int pos){
	
	struct node *temp2=(struct node *)malloc(sizeof(struct node));
	temp2->prev=NULL;
	temp2->data=value;
	temp2->next=NULL;

	temp=head;
	while(temp->next!=NULL){
		if(pos==1){
			break;
		}
		else{
			temp=temp->next;
			pos--;
		}
	}
	temp2->next=temp->next;
	temp->next->prev=temp2;
	temp2->prev=temp;
	temp->next=temp2;
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
	insert_pos(13,3);
	print();
	return 0;
}
