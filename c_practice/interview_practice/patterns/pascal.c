#include<stdio.h>
int main(){

	int n,value;
	printf("entre the size:");
	scanf("%d",&n);

	for(int i=0;i<=n;i++){
		for(int j=n-i;j>=1;j--){
			printf("  ");
		}
		value = 1;
		for(int j=0;j<=i;j++){
			printf("%4d ",value);
			value = value*(i-j)/(j+1);
		}
		printf("\n");
	}

	return 0;
}

