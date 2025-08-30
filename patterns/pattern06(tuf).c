
#include <stdio.h>
int pin(n){
    for(int i=1;i<=n-1;i++){
        for(int j=0;j<n-i-1;j++){
            printf("#");
        }
        for(int j=0;j<2*i-1;j++){
            printf("*");
        }
        for(int j=0;j<n-i-1;j++){
            printf("#");
        }
        printf("\n");
    }
    
    for(int i=1;i<n-i-1;i++){
        for(int j=0;j<i;j++){
            printf("#");
        }
        for(int j=0;j<2*n-(2*i+1);j++){
            printf("*");
        }
        for(int j=0;j<i;j++){
            printf("#");
        }
        printf("\n");
    }
}

int main()
{
    int n=4;
    pin(n);

    return 0;
}