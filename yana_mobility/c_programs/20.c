#include<stdio.h>
#include "20.h"

int main(){

	char str[50];
	printf("enter the string : ");
	scanf("%s",str);

	printf("length = %d\n",my_string(str));

	return 0;
}
