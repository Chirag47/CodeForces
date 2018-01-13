#include <iostream>
using namespace std;

int main(){
    int n,max = 0,min = 1000000;
    cin>>n;
    int a[n];
    int expense = 0;

    for(int i=0;i<n;i++){
        cin>>a[i];
        if(max<a[i])
            max = a[i];
        if(a[i] < min)
            min = a[i];
    }
    if(min == max){
        cout<<"0"<<endl;
        return 0;
    }
    for(int i=0;i<n;i++){
        expense += max - a[i];
    }
    cout<<expense<<endl;
    return 0;
}
