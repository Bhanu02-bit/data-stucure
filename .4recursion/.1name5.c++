#include <iostream>
using namespace std;



void f(int i,int n){
    if(i>n){
        return ;
    }
    cout<<"bhanu"<<endl;
    f(i+1,n);
}
int main(){
    int n=6;
    f(1,6);
}