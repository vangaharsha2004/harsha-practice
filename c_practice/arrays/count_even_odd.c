#include<stdio.h>

int main(){

	int a[20];
	int n,even = 0,odd = 0;

	printf("enter the size:");
	scanf("%d",&n);

	printf("enter the numbers:");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	for(int i=0;i<n;i++){
		if(a[i]%2 == 0){
			even++;
		}
		else{
			odd++;
		}
	}

	printf("even = %d , odd = %d\n",even,odd);
	return 0;
}
