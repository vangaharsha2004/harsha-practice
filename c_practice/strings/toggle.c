#include<stdio.h>

int main(){

	char s[20];
	printf("enter the string :");
	scanf("%s",s);

	int i=0;

	while(s[i]!='\0'){

		if(s[i]>='a' && s[i]<='z'){
			s[i]=s[i]-32;
		}
		else if(s[i]>='A' && s[i]<='Z'){
			s[i] = s[i]+32;
		}
		i++;
	}

	printf("after toggling the string %s\n",s);
	return 0;
}
