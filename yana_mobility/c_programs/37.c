#include<stdio.h>

int add(int a,int b){
	return a+b;
}
int sub(int a,int b){
        return a-b;
}
int mul(int a,int b){
        return a*b;
}
int div(int a,int b){
        return a/b;
} 

int main(){

	int a,b,choice;

	int (*operation[4])(int,int) = {add,sub,mul,div};

	printf("enter a and b : ");
	scanf("%d%d",&a,&b);
	
	printf("1. addition\n2. subtraction\n3. multiplication\n4. division\n");
	printf("Enter your choice: ");
    	scanf("%d", &choice);
	
    	if(choice >= 1 && choice <= 4)
    	{
        	printf("Result = %d\n", operation[choice - 1](a, b));
    	}
    	else
    	{
        	printf("Invalid choice\n");
    	}

    	return 0;
}
