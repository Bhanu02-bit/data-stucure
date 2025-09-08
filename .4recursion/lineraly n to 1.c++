#include <iostream>
using namespace std;


//from 1 t0 n lineraly 
void f(int i,int n){
    if(i>n){
        return ;
    }
    cout<<i<<endl;
    f(i+1,n);
}
int main(){
    int n=6;
    f(1,6);
}

// //from n t0 1 lineraly
// void f(int n,int i){
//     if(n<i){
//         return ;
//     }
//     cout<<n<<endl;
//     f(n-1,i);
// }
// int main(){
//     int n=6;
//     f(n,1);
// }