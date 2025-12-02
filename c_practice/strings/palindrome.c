#include<stdio.h>
#include<string.h>

int main(){

	char s[10];
	printf("enter the string :");
	scanf("%s",s);

	int n = strlen(s);

	for(int i=0;i<n/2;i++){
		if(s[i]!=s[n-i-1]){
			printf("the given string is not palindrome!\n");
			return 0;
		}

	}

	printf("the given string is palindrome!\n");
	return 0;
}

