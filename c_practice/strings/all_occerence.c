#include<stdio.h>
#include<string.h>

int main(){

	char s[100];
	printf("enter the string :");
	fgets(s,100,stdin);
	s[strcspn(s,"\n")] = '\0';

	printf("enter the char :");
	char find = getchar();

	int i=0;
	
	printf("the occerence of a char \n");
	while(s[i]!='\0'){
		if(s[i] == find){
			printf("%c find in the index of %d\n",find,i);
		}
		i++;
	}

	return 0;
}
