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
void inserting_begining(int value){
	struct node *tempe = (struct node *)malloc(sizeof(struct node));
	tempe->data=value;
	tempe->link=NULL;

	tempe->link=head;
	head=tempe;
}
void printing_nodes(struct node *head){
	temp=head;
	while(temp!=NULL){
		printf("%d\n",temp->data);
		temp=temp->link;
	}
}
int main(){
	int value;
	for(int i=0;i<5;i++){
		printf("enter the value:");
		scanf("%d",&value);
		creating_node(value);
	}
	inserting_begining(9);
	printing_nodes(head);
	return 0;
}

