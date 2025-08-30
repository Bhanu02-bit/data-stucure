
#include <stdio.h>


int print1(int n){
    int star=1;
    for(int i=0;i<n;i++){
        if(i%2==0){
            star=1;
        }
        else{
            star=0;
        }
        for(int j=0;j<i;j++){
            printf("%d",star);
            star=1-star;
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
