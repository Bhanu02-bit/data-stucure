#include<stdio.h>
int main(){
    int a[5]={10,20,30,40,50};
    

    printf("The original values:");
    for(int i=0;i<5;i++){
        printf("%d\t",a[i]);
    }
  
    int i=0,j=4,swap;
    // while(i<=j){
    //     swap=a[i];
    //     a[i]=a[j];
    //     a[j]=swap;
    //     i++;
    //     j--;
    // }
    if(i<=j){
         swap=a[i];
        a[i]=a[j];
        a[j]=swap;
        i++;
        j--;
    }
    printf("after reversing:");
     for(int i=0;i<5;i++){
        printf("%d\t",a[i]);
    }


    return 0;
}