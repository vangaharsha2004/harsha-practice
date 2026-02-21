#include<stdio.h>
int main(){

	int n;
	printf("enter the number:");
	scanf("%d",&n);
	
	int a=1;
	for(int i=1;i<n*2;i++){
		for(int j=1;j<=a;j++){
			printf("* ");
		}
		if(i<n){
			a++;
		}
		else{
			a--;
		}
		printf("\n");
	}
	return 0;
}
