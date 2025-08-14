#include<stdio.h>
int main(){

	int a,b,result=0;

	printf("enter the numbers:");
	scanf("%d %d",&a,&b);

	int c = (b<0)?-b:b;
	for(int i=0;i<c;i++){
		
		result +=a;
	}
	if(b<0){
		result = -result;
	}

	printf("the product of two numbers %d",result);
	return 0;
}
