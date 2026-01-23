#include<stdio.h>

int main(){

	char s[20];
	printf("enter the string :");
	scanf("%s",s);
	
	int alp = 0,dig = 0,oth = 0,i = 0;

	while(s[i]!='\0'){

		if(s[i]>='a' && s[i]<='z'){
			alp++;
		}
		else if(s[i]>='A' && s[i]<='Z'){
			alp++;
		}
		else if(s[i]>='0' && s[i]<='9'){
			dig++;
		}
		else{
			oth++;
		}
		i++;

	}

	printf("the count of alphabets %d\n",alp);
	printf("the count of digits %d\n",dig);
	printf("the count of special characters %d\n",oth);
	return 0;

}
