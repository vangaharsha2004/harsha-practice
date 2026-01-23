#include<stdio.h>
#define N 5

int s1[N],s2[2];
int top1=-1,top2=-1;

int count=0;

void push1(int data){
	if(top1 == N-1){
		printf("the queue is over flow!\n");
	}
	else{
		top1++;
		s1[top1]=data;
	}

}

void push2(int data){
        if(top2 == N-1){
                printf("the queue is over flow!\n");
        }
        else{
                top2++;
                s2[top2]=data;
        }

}

int pop1(){
        return s1[top1--];
}       

int pop2(){
        return s2[top2--];
} 

void enqueue(int data){
        push1(data);
        count++;

}

void dequeue(){
	int a,b;
	if(top1 == -1){
		printf("the queue is underflow!\n");
	}
	else{
		for(int i=0;i<count;i++){
			a = pop1();
			push2(a);
		}
		b = pop2();
		printf("%d dequeued\n",b);
		count--;
		for(int i=0;i<count;i++){
			b = pop2();
			push1(b);
		}
	}
}

void display(){
	if(top1==-1){
		printf("the queue is empety!\n");
		return;
	}

	for(int i=0;i<=top1;i++){
		printf("%d ",s1[i]);
	}
	printf("\n");

}

int main(){
	int value;
	for(int i=0;i<N;i++){
		printf("enter the element :");
		scanf("%d",&value);
		enqueue(value);
	}

	
	dequeue();
	display();
	return 0;
}
