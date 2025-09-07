#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int n=1634;
    int demo=n;
    while(n>0){
        int last=n%10;
        n=n/10;
        sum=sum+(last*last*last*last);
        
        
    }
    if(demo==sum){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}