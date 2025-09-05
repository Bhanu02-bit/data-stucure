

#include <stdio.h>


int print1(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<= 'A'+i;ch++){
            printf("%c",ch);//in case we use %c it gives character %d means int ascii values
            
        }
        // for(int j=0;j<2*n-2*i;j++){
        //     printf(" ");
        // }
      
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
