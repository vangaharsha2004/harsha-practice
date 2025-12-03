#include<stdio.h>
#include<string.h>
int main(){

	char s[100];
	printf("enter the string :");
	fgets(s,100,stdin);
	s[strcspn(s,"\n")] = '\0';

	int freq[100];
	int i=0;
	for(i=0;s[i]!='\0';i++){
		freq[i] = 0;
	}
	int sum;
	 i=0;
	while(s[i]!='\0'){
		sum =1;
		for(int j=i+1;s[j]!='\0';j++){
			if(s[i] == s[j]){
				sum++;
			}
			freq[i]=sum;
		}
		i++;
	}

	char maxc;
	int maxi = 0;

	for(i =0;s[i]!='\0';i++){
		if(maxi<freq[i]){
			maxc = s[i];
			maxi = freq[i];
		}
	}

	printf("the high frequency of a character %c is %d\n",maxc,maxi);
	return 0;
}

