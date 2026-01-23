#include<stdio.h>
#include<string.h>
int main(){

	char s[100];
	printf("enter the string :");
	fgets(s,100,stdin);
	s[strcspn(s,"\n")] = '\0';

	printf("enter the char :");
	char find = getchar();

	int n = -1;

	
	for(int i=0;s[i]!='\0';i++){
		if(s[i] == find){
			n = i;	
		}
	}

	if(n!=-1){
		printf("the last occarence of a index is  %d\n",n);
	}
	else{
		printf("the given char is not present\n");
	}
	return 0;
}
