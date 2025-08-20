
#include <stdio.h>

int main() {
    int n=5;
    int arr[5]={1,9,3,5,6};
    int count=0;
    
    
  
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            count=count+1;
        }
        
    }
    if(count==0){
        printf("the array is sorted");
    }
    else{
        printf("the array is not sorted");
    }
    return 0;
}