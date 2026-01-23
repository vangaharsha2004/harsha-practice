#include<stdio.h>
#include<string.h>
void compare(char a[20],char b[20]){
	if(strcmp(a,b)==0){
		printf("the two strings are  same!\n");
	}
	else{
		printf("the two strings are not same!\n");
	}
}
void normal(char a[20],char b[20]){
	for(int i=0;a[i]!='\0';i++){
		if(a[i]==b[i]){
			continue;
		}
		else{
			printf("the two strings are not same!\n");
			return;
		}
	}
	printf("the two strings are same!\n");
}
int main(){
	char a[20];
	printf("enter the 1st string:");
	scanf("%s",a);

	char b[20];
	printf("enter the 2nd string:");
	scanf("%s",b);

	compare(a,b);
	normal(a,b);
	 return 0;
}
