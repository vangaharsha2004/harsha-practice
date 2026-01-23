#include<stdio.h>
#include<stdlib.h>
#define N 5

int queue_arr[N];
int front = -1;
int rear = -1;

void enqueue(int value){

	if(front == -1 && rear == -1){
		front = rear = 0;
		queue_arr[rear]=value;
	}
	else if((rear+1)%N == front){
		printf("the queue is overflow!\n");
	}
	else{
		rear = (rear+1)%N;
		queue_arr[rear] = value;
	}
}

void dequeue(){

	if(front == -1 && rear == -1){
		printf("the queue is in underflow!\n");
	}
	else if(front == rear){
		front = rear = -1;
	}
	else{
		front = (front+1)%N;
	}

}

void peek(){

	if(front == -1){
		printf("the queue is empety!\n");
	}
	else{
		printf("the top most element %d\n",queue_arr[front]);
	}

}

void display(){

	if(rear == -1 && front == -1){
		printf("the queue is empety!\n");
	}
	else{
		for(int i=front;i!=rear;i = (i+1)%N){
			printf("%d ",queue_arr[i]);
		}
		printf("%d",queue_arr[rear]);
		printf("\n");
	}
}

int main(){
	int data,choice;
	while(1){
		printf("1. enqueue\n2. dequeue\n3. peek\n4. display\n5. quit\n");
		printf("enter the choice :");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("enter the element :");
				scanf("%d",&data);
				enqueue(data);
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
				break;

			default:
				printf("Invalid choice!\n");
				break;

		}
		printf("\n");
	}
	return 0;
}
