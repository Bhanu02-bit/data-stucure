

#include <stdio.h>


int print1(int n){
    for(int i=0;i<n;i++){
        char ch='A'+i;
       
        for(int j=0;j<=i;j++){
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
