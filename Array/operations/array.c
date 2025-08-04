#include<stdio.h>
int main(){
    int arr[4],n=4;
    printf("enter values:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the values are:");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}