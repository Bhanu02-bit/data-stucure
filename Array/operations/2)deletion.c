#include<stdio.h>
int main(){
    int a[6]={10,20,30,40,50},n=5;
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    printf("the updated values:");
    for(int i=1;i<n;i++){
        a[i]=a[i+1];
    }
    for(int i=0;i<n-1;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}