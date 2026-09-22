#include<stdio.h>
#include<string.h>
int main(){

	char s1[20],s2[20];
	printf("enter the 1st string : ");
	scanf("%s",s1);

	printf("enter the 2nd string : ");
	scanf("%s",s2);
	
	printf("the biggest string :");
	if(strcmp(s1,s2)==0){
		printf("%s\n",s1);
	}
	else{
		printf("%s\n",s2);
	}

	return 0;
}

