
#include <stdio.h>


int print1(int n){
    for(int i=i;i<n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",i);
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
