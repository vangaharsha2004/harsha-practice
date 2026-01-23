#include<stdio.h>
int main(){
	int a=2,b=3,c=5,d=6,e;
	e=a+d/b*c-b;
	printf("a+d/b*c-b = %d\n",e);
	e=d%c*a+b-d;
	printf("d%%c*a+b-d = %d\n",e);
	return 0;
}
