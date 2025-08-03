#include<stdio.h>
int main(){
    int a[7]={1,2,3,4,5};
    int pos=2,n=7;
    for(int i=pos;i<=n;i++){
        a[i]=a[i+1];
    }
    n--;

    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }

}