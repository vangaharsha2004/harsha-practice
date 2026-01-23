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
	struct node *temp2=(struct node *)malloc(sizeof(struct node));
	temp2->data=value;
	temp2->link=NULL;

	temp2->link=head;
	head=temp2;
}
void inserting_position(struct node *head,int value,int pos){
	struct node *temp3=(struct node *)malloc(sizeof(struct node));
	temp3->data=value;
	temp3->link=NULL;

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
	temp3->link=temp->link;
	temp->link=temp3;
}
void inserting_end(struct node *head,int value){
	tail=(struct node *)malloc(sizeof(struct node));
        tail->data=value;
        tail->link=NULL;
	
	temp=head;
	while(temp->link!=NULL){
        	temp=temp->link;
	}       
        temp->link=tail;
}
void printing_node(struct node *head){
	temp=head;
	printf("the data in the nodes are :\n");
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

	inserting_begining(45);

	inserting_position(head,21,4);

	inserting_end(head,53);

	printing_node(head);

	printf("\n");

	return 0;
}

