#include<stdio.h>
int main(){
	int a=7,b=5,inc;
	inc = (a>b)||(++a);
	printf("%d\n",inc);
	printf("%d\n%d\n",a,b);
	return 0;
}
