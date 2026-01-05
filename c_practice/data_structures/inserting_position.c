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

void inserting_position(struct node* head,int value,int pos){
	struct node *temp2=(struct node *)malloc(sizeof(struct node));
	temp2->data=value;
	temp2->link=NULL;

	temp=head;
	while(temp->link!=NULL){
		if(pos==1){
			break;
		}
		else{
			temp=temp->link;
			pos--;
		}
	}
	temp2->link=temp->link;
	temp->link=temp2;
}
void printing_node(struct node* head){
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
	inserting_position(head,23,2);
	printing_node(head);
	return 0;
}
