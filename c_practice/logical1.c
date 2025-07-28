#include<stdio.h>
int main(){
	int a=5,b=3;
	int inc;
	inc = (a>b)&&(b++);
	printf("%d\n",inc);
	printf("%d",b);
	return 0;
}
