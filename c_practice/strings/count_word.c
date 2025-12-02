#include<stdio.h>

int main(){
	char s[200];
	printf("enter the string:");
	fgets(s,200,stdin);

	int i=0;
	int word = 0;

	while(s[i]!='\0'){

		if((s[i]!=' ' && s[i]!='\n') && (s[i+1]==' ' || s[i+1] == '\n' || s[i+1]=='\0')){
			word++;
		}
		i++;
	}

	printf("the count of words in a string %d\n",word);
	return 0;
}
