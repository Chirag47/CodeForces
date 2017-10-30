#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> participants;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        a = 5-a;
        if(a >= k)
            participants.push_back(a);
    }
    cout<<participants.size()/3;
    return 0;

}
