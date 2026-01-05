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
	tail->link=tail;

	if(head==NULL){
		head=tail;
	}
	else{
		temp=head;
		while(temp->link!=head){
			temp=temp->link;
		}
		temp->link=tail;
		tail->link=head;
	}
}
void insert_begin(int value){
	struct node *ptr=(struct node *)malloc(sizeof(struct node));
	ptr->data=value;
	ptr->link=head;
	temp=head;
	while(temp->link!=head){
		temp=temp->link;
	}
	temp->link=ptr;
	head=ptr;
}
void insert_pos(int value,int pos){
	struct node *ptr=(struct node *)malloc(sizeof(struct node));
	ptr->data=value;
	ptr->link=NULL;
	temp=head;

	while(temp->link!=head){
		if(pos==1){
			break;
		}
		else{
			temp=temp->link;
			pos--;
		}
	}
	ptr->link=temp->link;
	temp->link=ptr;
}
void insert_end(int value){
	tail=(struct node *)malloc(sizeof(struct node));
	tail->data=value;
	tail->link=tail;

	temp=head;
	while(temp->link!=head){
		temp=temp->link;
	}
	temp->link=tail;
	tail->link=head;
}
void delete_begin(){
	temp=head;
	while(temp->link!=head){
		temp=temp->link;
	}
	temp->link=head->link;
	temp=head;
	head=head->link;
	free(temp);
	temp=NULL;
}
void delete_end(){
	temp=head;
	while(temp->link->link!=head){
		temp=temp->link;
	}
	free(temp->link);
	temp->link=head;
}
void delete_pos(int pos){
	struct node *ptr1=head;
	struct node *ptr2=NULL;
	while(ptr1->link!=head){
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
void print(){
	temp=head;
	do{
		printf("->%d",temp->data);
		temp=temp->link;
	}
	while(temp!=head);
	printf("\n");
}
void reverse(){
	struct node *temp1=NULL;
	struct node *temp2=NULL;
	temp=head;
	do{
		temp2=temp->link;
		temp->link=temp1;
		temp1=temp;
		temp=temp2;
	}
	while(temp!=head);
	head->link=temp1;
	head=temp1;
}
int main(){
	int value;
	for(int i=0;i<5;i++){
		printf("enter the value :");
		scanf("%d",&value);
		creating_node(value);
	}
//	insert_begin(10);
//	insert_pos(23,1);
//	insert_end(16);
//	delete_begin();
//	delete_end();
//	delete_pos(3);
	reverse();
	print();
	return 0;
}
