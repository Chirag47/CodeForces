#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int sum = 0;
    for(int i=0; i<n; i++){
        a[i] = n-i + i*(n-i-1);
        sum += a[i];
    }
    cout<<sum;
    return 0;
}
