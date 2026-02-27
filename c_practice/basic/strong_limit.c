#include<stdio.h>
int main(){

	int limit;
	printf("enter the limit:");
	scanf("%d",&limit);

	for(int i=1;i<=limit;i++){
		int sum =0;
		int temp =i;
		while(temp>0){
			int fact = 1;
			int r = temp%10;
			for(int j=1;j<=r;j++){
				fact = fact*j;
			}
			sum = sum +fact;
			temp = temp/10;
		}
		if(sum == i){
			printf("%d ",sum);
		}
	}
	return 0;
}
