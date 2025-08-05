#include<stdio.h>
int main(){
  int arr[7]={6,2,8,4,5,3,7},temp;
  int n=7;

  for(int i=0;i<n;i++){
    printf("%d",arr[i]);
  }

 
  for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i;j++){
      if(arr[j]>arr[j+1]){
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }
   printf("the output using bubble sort:");
  for(int i=0;i<n;i++){
    printf("%d",arr[i]);
  }

  return 0;
}