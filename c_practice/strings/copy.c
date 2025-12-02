#include<stdio.h>
#include<string.h>
void strcpy1(char a[20],char b[20]){
	strcpy(b,a);
	printf("%s",b);
	printf("\n");
}
void copy(char a[20],char c[20]){
	int ln=strlen(a);
	for(int i=0;i<ln;i++){
		c[i]=a[i];
	}
	printf("%s",c);
	printf("\n");
}
int main(){
	char a[20];
	printf("enter the string:");
	scanf("%[^\n]c",a);

	char b[20];
	char c[20];

	strcpy1(a,b);
	copy(a,c);
	 return 0;
}
