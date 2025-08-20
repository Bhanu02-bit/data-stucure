#include <stdio.h>

int main() {
 int age[]={12,34,5,8,9};
 int len =sizeof(age) / sizeof(age[0]);
 for(int i=0;i<len;i++){
    for(int j=i+1;j<len;j++){
       if(age[i]>age[j]){
         int temp =age[i];
         age[i]=age[j];
         age[j]=temp;
         }
         }
         }
  for(int i=0;i<len;i++){
  printf("%d\t",age[i]);
  }
  printf("\nlowest:%d",age[0]);
 
  printf("\nhighest:%d",age[len-1]);

  return 0;
}