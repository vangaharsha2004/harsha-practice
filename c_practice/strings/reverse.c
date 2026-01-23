#include<stdio.h>
#include<string.h>

int main(){

	char str[20];
	printf("enter the string :");
	scanf("%s",str);
	int n = strlen(str);
	for(int i=0;i<n/2;i++){
		char temp = str[i];
		str[i] = str[n-i-1];
		str[n-i-1] = temp;
	}

	printf("the string reverse %s\n",str);
	return 0;
}
