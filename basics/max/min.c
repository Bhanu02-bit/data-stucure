// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n=5;
    int arr[5]={1,4,3,5,2};
   for(int pass=0;pass<n-1;pass++){ 
    for(int i=0;i<n-1-pass;i++){
        if(arr[i]>arr[i+1]){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        }
    }
   }
    for(int i=0;i<n;i++){
        printf(" %d\t",arr[i]);
    }
    printf("max:%d",arr[n-1]);
    printf("min:%d",arr[0]);
    
    
    
  
    
    return 0;
}