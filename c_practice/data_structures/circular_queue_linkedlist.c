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

	if(rear == NULL){
		front = rear = temp;
		rear->link=front;
	}
	else{
		rear->link=temp;
		rear=temp;
		rear->link=front;
	}

}

void dequeue(){

	temp = front;
	if(front == NULL && rear == NULL){
		printf("the queue is underflow!\n");
	}
	else if(rear == front){
		free(temp);
		temp=NULL;
	}
	else{
		front = front->link;
		free(temp);
		temp = NULL;
		rear->link=front;
	}

}

void peek(){
	if(front == NULL && rear == NULL){
		printf("the queue is empety!\n");
	}
	else{
		printf("the top mos element %d\n",front->data);
	}
}
void display(){
	if(front == NULL && rear == NULL){
                printf("the queue is empety!\n");
        }
	else{
		temp=front;
		do{
			printf("->%d",temp->data);
			temp = temp->link;
		}while(temp!=front);
		printf("\n");
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
				printf("Invalid choice!\n");

			}
		printf("\n");
	}
	return 0;
}
