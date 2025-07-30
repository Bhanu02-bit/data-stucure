#include<stdio.h>
int main(){
    int arr[4],n=4,max;
    printf("enter values:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the values are:");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    
    max=arr[0];
    for(int i=0;i<n;i++){
       if(arr[0]<arr[i]){
        max=arr[i];
        printf("the max value :%d",max);
       }
    }
}