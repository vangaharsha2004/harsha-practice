#include <stdio.h>
int main(){
	char a[20];
	printf("enter the string:");
	scanf("%[^\n]s",a);

	for(int i=0;a[i]!='\0';i++){
		if(a[i]>='A' && a[i]<='Z'){
			a[i]=a[i]+32;
		}
	}
	printf("after converting all letters to captial %s\n",a);
	

    return 0;
}

