#include<stdio.h>
int main(){

	int n;
	printf("enter the size:");
	scanf("%d",&n);

	for(int i=1;i<=n;i++){
		int odd = 1;
		for(int j=1;j<=i;j++){
			printf("%d ",odd);
			odd+=2;
		}
		printf("\n");
	}
	return 0;
}
