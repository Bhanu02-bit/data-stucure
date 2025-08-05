
#include <stdio.h>

int main(){

  int arr[7]={8,3,6,4,1,5,2};
  int n =7,temp;

  for(int i=0;i<n-1;i++){
      int min=i;
      for(int j=i+1;j<n;j++){
          if(arr[j]<arr[min]){
              min=j;
          }
      }
      if(min!=i){
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
      }
      
  }
    
  
  for(int i=0;i<n;i++){
      printf("%d",arr[i]);
  }
  
    return 0;
}