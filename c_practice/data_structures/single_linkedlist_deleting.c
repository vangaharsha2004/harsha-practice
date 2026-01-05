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
void deleting_begin(){
	struct node *ptr=head;

	head=head->link;
	free(ptr);
}
void deleting_position(int pos){

	struct node *ptr1=head;
	struct node *ptr2=head;

	while(ptr1->link!=NULL){
		if(pos==1){
			break;
		}
		else{
			ptr2=ptr1;
			ptr1=ptr1->link;
			pos--;
		}
	}
	ptr2->link=ptr1->link;
	free(ptr1);
}
void deleting_end(){

	temp=head;
	while(temp->link->link!=NULL){
		temp=temp->link;
	}
	free(temp->link);
	temp->link=NULL;
}
void printing_node(){
	temp=head;
	while(temp!=NULL){
		printf("->%d",temp->data);
		temp=temp->link;
	}
}
int main(){
	int value;
	for(int i=0;i!=-1;i++){
		printf("enter the value :");
		scanf("%d",&value);
		if(value==-1){
			break;
		}
		else{
			creating_node(value);
		}
	}
	deleting_begin();
	deleting_position(4);
	deleting_end();
	printing_node();
	printf("\n");
	return 0;
}
