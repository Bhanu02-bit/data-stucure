#include<iostream>
using namespace std;
int main(){
    int n=2345;
    while(n>0){
        int last=n%10;
        cout<<last<<endl;
        n=n/10;
    }
}