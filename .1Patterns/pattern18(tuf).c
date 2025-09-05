

#include <stdio.h>


int print1(int n){
    for(int i=1;i<n;i++){
       
       
       
        for(char ch='E'-i;ch<='E';ch++){
            printf("%c",ch);
            
        }
        //for star or space
        for(int j=0;j<n-i;j++){
            printf("*");
            
        }
        
        printf("\n");
      
        
    }
    
}

int main()
{   int n;
    printf("enter a n value:");
    scanf("%d",&n);
    print1(n);

    return 0;
}
