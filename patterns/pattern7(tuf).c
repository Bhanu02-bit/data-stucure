
#include <stdio.h>


int print1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            printf("#");
        }
        for(int j=0;j<2*i+1;j++){
            printf("*");
        }
        for(int j=0;j<n-i-1;j++){
        printf("#");
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
