#include<stdio.h>
#include<string.h>

int main(){
	char str[100],sub[100];

	printf("enter the string :");
	fgets(str,100,stdin);
	str[strcspn(str,"\n")] = '\0';

	printf("enter the sub string :");
	fgets(sub,100,stdin);
	sub[strcspn(sub,"\n")] = '\0';

	int n1 = strlen(str);
	int n2 = strlen(sub);
	int j=0,i=0;
	while(str[i]!='\0'){
		if(str[i] == sub[j]){

			j++;
			if(j == n2){
				printf("the sub string is there\n");
				return 0;
			}
		

		}
		else{
			j=0;
		}
		i++;
	}

	printf("the sub string is not there\n");
	return 0;
}

