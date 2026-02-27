#include<stdio.h>
int main(){

	int n;
	printf("enter the size:");
	scanf("%d",&n);

	int a=1,b=1,c;

	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			printf("%d ",a);
			c = a+b;
			a=b;
			b=c;
		}
		printf("\n");
	}
	return 0;
}

