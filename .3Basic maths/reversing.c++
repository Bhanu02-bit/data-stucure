#include<iostream>
using namespace std;
int main(){
        int revn=0;
    int n=2345;
    while(n>0){
        int last=n%10;
        n=n/10;
        revn=(revn *10)+last;
        
        
    }
    cout<<"revn:"<< revn<<endl;
}