#include<stdio.h>

int main(){

	int a[20];
	int n;

	printf("enter the size:");
	scanf("%d",&n);

	printf("enter the numbers:");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	int max,sec_max;

	if(a[0]>a[1]){
		max = a[0];
		sec_max = a[1];
	}
	else{
		max = a[1];
		sec_max = a[0];
	}

	for(int i=2;i<n;i++){
		if(a[i]>max){
			sec_max = max;
			max = a[i];
		}
		else if(a[i]<max && a[i]>sec_max){
			sec_max = a[i];
		}
	}
	
	printf("MAX = %d , SEC_MAX = %d\n",max,sec_max);
	return 0;
}
