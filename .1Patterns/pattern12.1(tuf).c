

#include <stdio.h>


int print1(int n){
    int i=i+1;
    for(int i=1;i<=n;i++){
        
        for(int j=0;j<=i;j++){
            
            printf("%d",j+i);
            
        }
        for(int j=0;j<2*n-2*i;j++){
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
