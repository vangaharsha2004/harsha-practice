#include<stdio.h>
int main(){

	int n;
	printf("enter the size:");
	scanf("%d",&n);

	int num=1,k=2;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			printf("%d ",num);
			while(1){
				int flag =1;
				for(int l=2;l<k;l++){
					if(k%l==0){
						flag =0;
						break;
					}
				}
				if(flag ==1){
					num =k;
					break;
				}
				k++;
			}
			k++;
		}
			printf("\n");
	}
		return 0;
}
