#include <stdio.h>

int main()
{  
   int ar[8],value=50,pos=2;
   printf("enter values :");
   for (int i = 0; i < 6; i++)
   {
    scanf("%d",&ar[i]);
   }
   for (int i = 0; i < 6; i++)
   {
    printf("%d",ar[i]);
   }
   for(int i=6;i>=pos-1;i--){
    ar[i+1]=ar[i];
   }
   ar[pos-1]=50;
   printf("after insertion:");
    for(int i=0;i<7;i++){
        printf("%d",ar[i]);
    }   
    return 0;
}


