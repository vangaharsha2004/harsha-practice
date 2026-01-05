#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
struct node *top=NULL;
struct node *temp=NULL;

void push(int value){
	struct node *newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->link=top;

	top=newnode;

}

void pop(){
	if(top==NULL){
		printf("the stack is underflow!\n");
		return;
	}
	temp=top;
	top=top->link;
	free(temp);
	temp=NULL;
}

void print(){
	if(top==NULL){
		printf("the stack is empety!\n");
		return;
	}
	temp=top;
	while(temp!=NULL){
		printf("->%d",temp->data);
		temp=temp->link;
	}
	printf("\n");
}

void peek(){
	if(top==NULL){
		printf("the stack is underflow!\n");
		return;
	}
	printf("%d\n",top->data);
}

int main(){
	int choice,data;
	while(1){
		printf("1. push\n2. pop\n3. top most element\n4. print all elements\n5. quit\n");
		printf("enter your choice :");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("enter the element :");
				scanf("%d",&data);
				push(data);
				break;

			case 2:
				pop();
				break;

			case 3:
				peek();
				break;

			case 4:
				print();
				break;

			case 5:
				exit(0);

			default:
				printf("Invalid choice!\n");

			}
	}
	return 0;
}
