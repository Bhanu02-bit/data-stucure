
#include <stdio.h>


int print1(int n){
    for(int i=i;i<n;i++){
        for(int j=i;j<n;j++){
            printf("%d",j);
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
