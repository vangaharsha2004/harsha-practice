#include<stdio.h>
#include<stdlib.h>
#define N 5

int queue_arr[N];
int front = -1;
int rear = -1;

void enqueue(int data){

	if(rear == N-1){
		printf("the queue is over flow!\n");
	}
	else if(front == -1 && rear == -1){
		front = rear = 0;
		queue_arr[rear]=data;
	}
	else{
		rear++;
		queue_arr[rear]=data;
	}
}

void dequeue(){

	if(front==-1 && rear == -1){
		printf("the queue is underflow!\n");
	}
	else if(front == rear){
		front=rear=-1;
	}
	else{
		front++;
	}
}

void display(){
	if(front ==-1 && rear == -1){
		printf("the queue is empety!\n");
	}
	else{
		for(int i=front;i<=rear;i++){
			printf("%d ",queue_arr[i]);
		}
		printf("\n");
	}
}

void peek(){

	if(front ==-1 && rear == -1){
		printf("the queue is empety!\n");
	}
	else{
		printf("the first element is %d\n",queue_arr[front]);
	}

}

int main(){
	int choice,data;
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

			default:
				printf("Invalid choice!\n");
			}
		printf("\n");
	}
	return 0;
}

