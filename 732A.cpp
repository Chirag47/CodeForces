#include <iostream>
using namespace std;

int main(){
    int k,r;
    cin>>k>>r;
    int a,b,i=0;
    do{
        a = 10*i + r;
        b = 10 * ++i;
    }while(a%k != 0 && b%k != 0);
    if(a%k == 0)
        cout<<a/k;
    else
        cout<<b/k;
    return 0;
}
