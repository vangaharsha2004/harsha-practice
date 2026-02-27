#include<stdio.h>
int main(){
    
    int n;
    printf("enter the size:");
    scanf("%d",&n);
    
    int a[100];
    int freq[100];
    
    printf("enter the elements in elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        freq[i]=-1;
    }
    
    for(int i=0;i<n;i++){
        if(freq[i]==-1){
           int count = 1;
            for(int j=i+1;j<n;j++){
                if(a[i] == a[j]){
                    count++;
                    freq[j]=0;
                }
            }
            freq[i] = count;
        }
    }
    for(int i=0;i<n;i++){
        if(freq[i]>0){
            printf("the freq of the number %d is %d\n",a[i],freq[i]);
        }
    }
    return 0;
}
