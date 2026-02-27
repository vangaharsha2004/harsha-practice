#include<stdio.h>
int main(){

	int n;
	printf("enter the size:");
	scanf("%d",&n);

	for(int i=1;i<=n;i++){
		for(int j=n-i;j>=1;j--){
			printf(" ");
		}
		for(int j=i;j>=1;j--){
			printf("%d",j);
		}
		for(int j=1;j<=i;j++){
			if(j==1){
				continue;
			}
			else{
				printf("%d",j);
			}
		}
		printf("\n");
	}
	return 0;
}
