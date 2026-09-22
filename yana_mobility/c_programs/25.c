#include<stdio.h>
#include<string.h>

char *my_strcpy(const char *str,char *des){

	strcpy(des,str);
	return des;
}

char *my_strcat(char *str1,char *str2){

	strcat(str1,str2);
	return str1;
}

int my_strcmp(char *str1,char *str2){

	return strcmp(str1,str2);
}

int main(){

	printf("1. stringcopy \n2. strcat \n3. strcompare \n");
	int choice;
	printf("enter the choice : ");
	scanf("%d",&choice);

	switch(choice){

		case 1:
			char str[20],des[20];
			printf("enter your string :");
			scanf("%s",str);
			
			my_strcpy(str,des);
			printf("actual string = %s and copiyed string = %s\n",str,des);
			break;

		case 2:
			char str1[50],str2[20];
			printf("enter 1st string :");
                        scanf("%s",str1);
			printf("enter 2nd string :");
                        scanf("%s",str2);

			my_strcat(str1,str2);
			printf("after cancating the two strings %s\n",str1);
			break;

		case 3:
			char str3[50],str4[20];
                        printf("enter 1st string :");
                        scanf("%s",str3);
                        printf("enter 2nd string :");
                        scanf("%s",str4);

			int result = my_strcmp(str3,str4);

			if(result==0){
				printf("both strings are equal\n");
			}
			else if(result>0){
				printf("1st string is bigger\n");
			}
			else{
				printf("2nd string is bigger\n");
			}
			break;

		default:
			printf("invalid choice\n");
	}
	return 0;
}

