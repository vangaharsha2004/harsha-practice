#include<stdio.h>
int main(){

	int n;
	printf("enter the size:");
	scanf("%d",&n);

	for(int i=1;i<=n;i++){
		for(int j=n-i;j>=1;j--){
			printf("  ");
		}
		for(int j=i-1;j>=0;j--){
			printf("%c ",'A'+j);
		}
		for(int j=1;j<i;j++){
			printf("%c ",'A'+j);
		}
		printf("\n");
	}
	return 0;
}
