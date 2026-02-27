#include<stdio.h>
int main(){

	int n;
	printf("enter the size:");
	scanf("%d",&n);

	for(int i=1;i<=n;i++){
		for(int j=0;j<i;j++){
			printf("%c",'A'+j);
		}
		printf("\n");
	}
	return 0;
}
