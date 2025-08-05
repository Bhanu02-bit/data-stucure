#include<stdio.h>
//i did not getting how to do

int main(){
    int a[5]={10,20,20,40,50},count;
    

    printf("The original values:");
    for(int i=0;i<5;i++){
        printf("%d\t",a[i]);
    }
   printf("\n");
    for(int i=0;i<5;i++){
        if(a[i]!=-1){
            count=1;
        }
        for(int j=i+1;j<5;j++){
            if(a[j]==a[i]){
                count++;
                a[j]=-1;
            }
        
    }


return 0;

} 