// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n=5,ele,found=0;
    int arr[5]={1,8,2,7,6};
    printf("enter an element need to search :");
    scanf("%d",&ele);
    
   
    for(int i=0;i<n;i++){
        
        if(ele==arr[i]){
            printf("element is :%d at index:%d",arr[i],i);
            found=1;
            break;
        }
        
    }
    if(!found){
        printf("not found");
    }
    return 0;
}