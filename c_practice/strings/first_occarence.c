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
	while(s[i]!='\0'){

		if(s[i] == find){
			printf("the occarence in the index of %d\n",i);
			return 0;
		}
		i++;
	}

	printf("there is no char\n");
	return 0;
}


