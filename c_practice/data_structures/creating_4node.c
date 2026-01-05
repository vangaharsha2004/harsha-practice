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
			temp = temp->link;
		}
		temp->link=tail;
	}
}
void printing_node(struct node *head){
	temp=head;
	while(temp!=NULL){
		printf("%d\n",temp->data);
		temp=temp->link;
	}
}
int counting_node(struct node *head,int count){
	temp = head;
	while(temp!=NULL){
		count++;
		temp = temp->link;
	}
	return count;
}
int main(){
	int value;
	for(int i=0;i<5;i++){
		printf("enter the number :");
		scanf("%d",&value);
		create_node(value);
	}

	printing_node(head);
	int count=0;
	printf("the count of the nodes are %d\n",counting_node(head,count));
	return 0;
}
