#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
struct node *head=NULL;
struct node *tail=NULL;
struct node *temp=NULL;

void create_node(int value){
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
void insert_end(int value){
	 tail=(struct node *)malloc(sizeof(struct node));
        
        tail->data=value;
        tail->link=NULL;

	temp=head;
	while(temp->link!=NULL){
		temp=temp->link;
	}
	temp->link=tail;
}
void print_node(struct node *head){
	temp=head;
	while(temp!=NULL){
		printf("->%d",temp->data);
		temp=temp->link;
	}
}
int main(){
	int value;
	for(int i=0;i<5;i++){
		printf("enter the value:");
		scanf("%d",&value);
		create_node(value);
	}

	insert_end(15);
	print_node(head);
	printf("\n");
	return 0;
}
