
#include <iostream>
using namespace std;

int cunt=0;
void f(){
    if(cunt==4){
        return;
    }
    cout<<cunt<<endl;
    cunt++;
    f();
}

int main()
{
  f();

    return 0;
}