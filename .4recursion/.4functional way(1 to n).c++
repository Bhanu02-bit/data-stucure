
#include <iostream>
using namespace std;



int sum( int n){
    if(n==0) return 0;
    return n+sum(n-1);

//TASK 1{fastorial}
// int f( int i){
//     if(i==0) { 
//         return 1 ;
//     }
//     return i*f(i-1);
        
}

int main(){
    int n;
    std::cout << "enter n value:" << std::endl;
    cin>>n;
    cout<<sum(n)<<endl;
}