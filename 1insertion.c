#include<stdio.h>
int main(){
    int a[7],pos=2,value=6;
    printf("enter values for array:");
    

    for(int i=0;i<6;i++){
        scanf("%d",&a[i]);
    }

    for(int i=5;i>=pos-1;i--)//here you doing mistake in ++ and > signs
    a[i+1]=a[i];

    a[pos-1]=value;
printf("the updated values are:");
    for(int i=0;i<7;i++){
        printf("%d",a[i]);
    }

 return 0;
}