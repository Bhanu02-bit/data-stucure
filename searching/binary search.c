#include<stdio.h>
int main(){
    int arr[6]={1,4,5,7,8,3},key=7,flag=0,i=0,j=5;

    printf("The original values:");
    for(int i=0;i<6;i++){
        printf("%d\t",arr[i]);
    }
    
    while(i<=j){
        int mid=(i+j)/2;
        if(arr[mid]==key){
            int p=mid+1;
            flag=1;
            break;
        }
        if(arr[mid]>key){
            j=mid-1;
        }
        if(arr[mid]<key){
            i=mid+1;
        }
    }
    if(flag==1){
        printf("\nthe value is searched");
       
    }
    else{
        printf("the values is not array");
    }
    

    return 0;
}