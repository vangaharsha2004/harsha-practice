#include<stdio.h>
int main(){
	
	char str[30];
	printf("enter the string: ");
	scanf("%s",str);

	int count=0;

	while(str[count]!='\0'){
		count++;
	}

	printf("the length of the string %d\n",count);
	return 0;
}
