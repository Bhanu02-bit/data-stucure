#include<iostream>
using namespace std;
int main(){
    int revn=0;
    int n=799;
    int demo=n;
    while(n>0){
        int last=n%10;
        n=n/10;
        revn=(revn *10)+last;
        
        
    }
    if(demo==revn){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}