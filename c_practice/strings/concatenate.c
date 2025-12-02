#include<stdio.h>
#include<string.h>
void con(char a[20],char b[20]){
	strcat(a,b);
	printf("%s",a);
	printf("\n");
}
void normal(char a[20],char b[20]){
	int ln1=strlen(a);
	int ln2=strlen(b);

	for(int i=0;i<ln2;i++){
		a[ln1]=b[i];
		ln1++;
	}
	a[ln1]='\0';
	printf("%s",a);
	printf("\n");
}
int main(){
	char a[20];
	printf("enter the 1st string:");
	scanf("%[^\n]s",a);
	getchar();

	char b[20];
	printf("enter the second string:");
	scanf("%[^\n]c",b);
	
	char temp[20];
	strcpy(temp,a);

	con(temp,b);
	normal(a,b);
	return 0;
}
