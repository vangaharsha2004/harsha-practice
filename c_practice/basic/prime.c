#include<stdio.h>
int main(){

	int a;
	printf("enter the number:");
	scanf("%d",&a);
	
	int flag=1;

	for(int i=2;i<a;i++){
		 if(a%i==0){
			 flag =0;
			 break;
		 }
	}

	if(flag ==1){
		printf("it is prime number\n");
	}
	else{
		printf("it is not prime number\n");
	}
	return 0;
}

