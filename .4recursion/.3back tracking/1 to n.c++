
#include <iostream>
using namespace std;



void f(int i,int n){
    if(i<1){
        return ;
    }
    f(i-1,n);
    //because of these the return of the function prints last person first that's why 1,2,3 comes insted 3,2,1
    cout<<i<<endl;
    
}
int main()
{  int n;
cout<<"enter n value:"<<endl;
   cin>>n;
   f(n,n);
    

    return 0;
}