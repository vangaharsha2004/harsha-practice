#include<stdio.h>
int main(){
	int a=2,b=3;

	a=a^b;
	b=a^b;
	a=a^b;

	printf("after swapping the numbers %d %d\n",a,b);
	return 0;
}
