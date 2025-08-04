#include<stdio.h>
int main(){
    int a[6],i,value=7,flag=0;
     printf("enter values:");
    for(i=0;i<5;i++){
       
        scanf("%d",&a[i]);
    }
    printf("original array:");
     for(i=0;i<5;i++){
        printf("%d",a[i]);
       
    }

    for(int i=0;i<6;i++){
        if(a[i]==value){
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        printf("element is not found");
    }
    else
    {
        for(;i<5;i++){
            a[i]=a[i+1];
            printf("modified array:");
            for(i=0;i<5;i++){
                printf("%d/t",a[i]);
            }
        }
    }
    
}