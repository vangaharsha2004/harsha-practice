#include<stdio.h>
int main(){

	char str[30];
	printf("enter the string: ");
	scanf("%s",str);

	for(int i=0;str[i]!='\0';i++){
		for(int j=i+1;str[j]!='\0';j++){
			if(str[i]>str[j]){
				char temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}

	printf("after rearring the alphbets %s\n",str);
	return 0;
}
