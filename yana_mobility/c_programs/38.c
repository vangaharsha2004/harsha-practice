#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int stack_arr[MAX];
int top = -1;

int isFull(){
    if(top==MAX-1){
	    return 1;
    }
    else{
	    return 0;
    }
}
int isEmpety(){
    if(top==-1){
	    return 1;
    }
    else{
	    return 0;
    }
}

void print(){
    if(isEmpety()){
        printf("The stack is empty\n");
        return;
    }
    for(int i = top; i >= 0; i--){
        printf("%d ", stack_arr[i]);
    }
    printf("\n");
}

void push(int data){
    if(isFull()){
        printf("Stack Overflow!\n");
        return;
    }
    top++;
    stack_arr[top] = data;
    
}

void pop(){
    if(isEmpety()){
        printf("Stack Underflow!\n");
        return;
    }
   	
    top--;
}

int peek(){
    if(isEmpety()){
        printf("Stack is empty!\n");
        return -1;
    }
    return stack_arr[top];
}

int main(){
    int choice,data;

    while(1){
        printf("\n1. Push\n2. Pop\n3. Display\n4. Peek\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                printf("Enter value: ");
                scanf("%d",&data);
                push(data);
                break;

            case 2:
                pop();
                break;

            case 3:
                print();
                break;

            case 4:
                printf("Top element = %d\n", peek());
                break;

            case 5:
                exit(0);

            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}

