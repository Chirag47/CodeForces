#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int x,y;
    if(a>b){
        x = b;
        y = a-b;
    }
    else if(b>a){
        x = a;
        y = b-a;
    }
    else{
        cout<<a<<" 0";
        return 0;
    }
    cout<<x<<" "<<y/2;
    return 0;

}
