#include<stdio.h>
int main(){
    int a[5];
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }

    printf("the original values:");
    for(int i=0;i<5;i++){
        printf("%d\t",a[i]);
    }

    printf("the reversed values:");

    for(int i=4;i>=0;i--){
        printf("%d\t",a[i]);
    }

    return 0;

}