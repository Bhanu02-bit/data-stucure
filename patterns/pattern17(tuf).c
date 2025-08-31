

#include <stdio.h>


int print1(int n){
    for(int i=1;i<=n;i++){
        
      
        for(int j=0;j<=n-i-1;j++){
            printf("*");
            
        }
        
        char ch='A';
        int breakpoint=(2*i+1)/2;//for half
        for(int j=1;j<=2*i+1;j++){
            
            printf("%c",ch);
            if(j<=breakpoint){
                ch++;
            }
            else{
                ch--;
            }
           
            
        }
        for(int j=0;j<=n-i-1;j++){
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
