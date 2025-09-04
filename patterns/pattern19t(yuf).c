

#include <stdio.h>


int print1(int n){
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            printf("*");
        }
       
        for(int j=1;j<=2*i;j++){
            printf("0");
        }
        for(int j=0;j<n-i;j++){
            printf("*");
        }
        printf("\n");
    }
     for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            printf("*");
        }
       
        for(int j=0;j<=2*n-2*i;j++){
            printf("0");
        }
        for(int j=0;j<i;j++){
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
