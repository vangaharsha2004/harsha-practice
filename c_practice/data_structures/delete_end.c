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
void deleting_end(){
	struct node *ptr=head;
	while(ptr->link->link!=NULL){
		ptr=ptr->link;
	}
	free(ptr->link);
	ptr->link=NULL;
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
	for(int i=0;i<4;i++){
		printf("enter the value :");
		scanf("%d",&value);
		creating_node(value);
	}
	deleting_end();
	printf("the nodes are:\n");
	print_node(head);
	printf("\n");
	return 0;
}
