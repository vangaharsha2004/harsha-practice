#include<stdio.h>
#include<string.h>

void streverse(char *str,int i,int j){
	while(i<j){
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
}

int main(){

	char s[100];
	printf("enter the string: ");
	fgets(s,100,stdin);
	s[strcspn(s,"\n")] = '\0';

	int n = strlen(s);

	int i=0;
	int j=n-1;

	streverse(s,i,j);

	for(int k=0;k<=n;k++){
		if(s[k]==' ' || s[k]=='\0'){
			j = k-1;
			streverse(s,i,j);
			i = k+1;
		}
	}

	printf("after reversing the words %s\n",s);
	return 0;
}
