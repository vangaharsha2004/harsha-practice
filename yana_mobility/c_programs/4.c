#include<stdio.h>
int main(){

	int limit;
	printf("enter the limit:");
	scanf("%d",&limit);
	
	printf("the prime numbers are:\n");
	for(int i=1;i<=limit;i++){
		int flag = 1;
		for(int j=2;j<i;j++){
			if(i%j==0){
				flag = 0;
				break;
			}
		}
		if(flag == 1){
			printf("%d ",i);
		}
	}
	printf("\n");

	return 0;
}
