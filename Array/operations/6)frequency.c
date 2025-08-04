#include<stdio.h>
int main(){
    int a[5]={10,20,20,40,50},num=0;
    

    printf("The original values:");
    for(int i=0;i<5;i++){
        printf("%d\t",a[i]);
    }
    for(int i=0;i<5;){
        if(a[i]==20){
           num++;
        }
        i++;
    }
    printf("the frequency: %d",num);
    return 0;
}