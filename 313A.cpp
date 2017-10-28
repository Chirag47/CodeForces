#include <iostream>
using namespace std;

int main(){
    long int n;
    long int max;
    cin>>n;
    long int a,b;
    a = n/10;
    int k = n%10;
    b = n/100;
    b = b*10 + k;
    if(n>a)
        max = n;
    else
        max = a;

    if(b>max)
        max = b;

    cout<<max;
}
