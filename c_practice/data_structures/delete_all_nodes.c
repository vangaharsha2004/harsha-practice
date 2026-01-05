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
void deleting_nodes(){
	while(head!=NULL){
		temp=head;
		head=head->link;
		free(temp);
		temp=NULL;
	}
	tail=NULL;
}
void print_node(){
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
	deleting_nodes();
	if(head==NULL){
		printf("linked list is empety\n");
	}
	else{
		print_node();
	}
	return 0;
}
