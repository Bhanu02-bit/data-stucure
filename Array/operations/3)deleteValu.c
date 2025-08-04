#include<stdio.h>
int main(){
    int a[5]={1,2,3,2,5},n=5,j,i;
    int value=2;
    printf("the values are:");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

    
    for(int i=0;i<n;i++){
        if(a[i]==value){
            for(j=i;j<n-1;j++){
                a[j]=a[j+1];
            }
            n--;
            i--;
         }  
    }
    printf("after deleting the values:");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }


    return 0;

}