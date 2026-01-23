#include<stdio.h>
#include<string.h>
int main(){
	char a[20];
	printf("enter the string:");
	scanf("%[^\n]c",a);

	int ln=strlen(a);

	printf("the length of the string %d\n",ln);
	return 0;
}
