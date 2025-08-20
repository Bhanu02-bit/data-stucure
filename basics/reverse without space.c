// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n=5;
    int arr[5]={1,8,2,7,6};
    int start=0;
    int end=n-1;
    
    while(start<end){
        int temp=arr[end];
        arr[end]=arr[start];
        arr[start]=temp;
        start++;
        end--;
    }
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
     
    return 0;
}