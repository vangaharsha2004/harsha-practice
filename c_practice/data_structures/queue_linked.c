#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};

struct node *front=NULL;
struct node *rear=NULL;
struct node *temp=NULL;

void enqueue(int value){

	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=value;
	temp->link=NULL;

	if(front==NULL){
		front=rear=temp;
	}
	else{
		rear->link=temp;
		rear=temp;
	}
}

void dequeue(){
	
	if(front == NULL && rear == NULL){
		printf("the queue is underflow!\n");
	}
	else{
		temp=front;
		front=front->link;
		free(temp);
		temp=NULL;
	}
}

void display(){
	
	if(front == NULL && rear == NULL){
		printf("the queue is empety!\n");
	}
	else{
		temp=front;
		printf("the elements in Queue :\n");
		while(temp!=NULL){
			printf("->%d",temp->data);
			temp=temp->link;
		}
		printf("\n");
	}
	
}

void peek(){
	if(front == NULL && rear == NULL){
                printf("the queue is empety!\n");
        }
	else{
		printf("the top most element : %d\n",front->data);
	}
}

int main(){
	int choice,value;
	while(1){
		printf("1. enqueue\n2. dequeue\n3. peek\n4. display\n5. quit\n");
		printf("enter the choice :");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("enter the element :");
				scanf("%d",&value);
				enqueue(value);
				break;

			case 2:
				dequeue();
				break;

			case 3:
				peek();
				break;

			case 4:
				display();
				break;

			case 5:
				exit(0);

			default:
				printf("Invalid choice\n");

		}

		printf("\n");
	}
	return 0;
}

