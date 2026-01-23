#include<stdio.h>

void main(){
	
	char s[20];
	printf("enter the string :");
	scanf("%s",s);

	int v=0,c=0,i=0;

	while(s[i]!='\0'){
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
			v++;
		}
		else if(s[i]>='a' && s[i]<='z'){
			c++;
		}
		else if(s[i]>='A' && s[i]<='Z'){
			c++;
		}
		i++;
	}

	printf("the count of the vowel is %d\n",v);
	printf("the count of the constants is %d\n",c);
}
