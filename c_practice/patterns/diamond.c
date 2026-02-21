#include<stdio.h>
int main(){

	int n;
	printf("eneter the number:");
	scanf("%d",&n);

	int a=1;
	int b=n-1;

	for(int i=1;i<n*2;i++){
		for(int j=1;j<=b;j++){
			printf("  ");
		}
		for(int j=1;j<a*2;j++){
			printf("* ");
		}
		if(i<n){
			a++;
			b--;
		}
		else{
			a--;
			b++;
		}
		printf("\n");
	}

	return 0;
}
