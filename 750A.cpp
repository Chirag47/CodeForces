#include <iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int count=0,i=1;
    int t = 240;
    t = t-k;
    //cout<<t;
    while(t>0 && i<=n){
       // cout<<"1"<<endl;
        t = t - 5*i;
        if(t >= 0){
            //cout<<"2"<<endl;
           // cout<<t<<endl;
            count++;
            i++;
        }
    }
    cout<<count;
    return 0;
}
