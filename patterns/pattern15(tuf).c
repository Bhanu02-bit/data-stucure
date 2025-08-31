

#include <stdio.h>


int print1(int n){
    for(int i=0;i<n;i++){
        
       
        for(char ch='A';ch<='A'+n-i;ch++){
            printf("%c",ch);
            
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
