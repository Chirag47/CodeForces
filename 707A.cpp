#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int flag = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            char ch;
            cin>>ch;
            if(ch == 'C' || ch == 'M' || ch == 'Y')
                flag = 1;
        }
    }
    if(flag == 0)
        cout<<"#Black&White";
    else
        cout<<"#Color";
    return 0;
}
