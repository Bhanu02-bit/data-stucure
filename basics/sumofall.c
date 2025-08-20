// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[5]={1,8,2,7};
    int sum=0;
    
    for(int i=0;i<5;i++){
        sum=sum+arr[i];
       
    }
     printf("%d\t",sum);
    return 0;
}