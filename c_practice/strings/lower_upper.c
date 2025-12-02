#include<stdio.h>
int main(){
	
		char a[20];
		printf("enter the string:");
		scanf("%[^\n]s",a);

		for(int i=0;a[i]!='\0';i++){
			if(a[i]>='a' && a[i]<='z'){
				a[i]=a[i]-32;
			}
		}

		printf("after converting to upper case %s\n",a);
		return 0;
}
