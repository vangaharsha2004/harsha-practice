#include<stdio.h>
int main(){
	int a=2,b=3;
	b = a++ + b--;
	a = a-- + ++b;
	b = ++a + --b;
	printf("a = %d and b = %d",a,b);
	return 0;
}
