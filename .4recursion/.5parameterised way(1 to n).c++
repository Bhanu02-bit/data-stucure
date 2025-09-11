
#include <iostream>
using namespace std;



void f( int i,int sum){
    if(i<1){
        cout<<sum;
        return ;
    }
    f(i-1,sum+i);
//     TASK 2{fact}
//     void f( int i,int mult){
//     if(i==0){
//         cout<<mult;
//         return ;
//     }
//     f(i-1,mult*i);
    
    
// }
    
    
}

int main(){
    int n;
    std::cout << "enter n value:" << std::endl;
    cin>>n;
    f(n,0);
}