#include <iostream>
using namespace std;

int main(){
    int n,flag = 0;
    cin>>n;
    string arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i][0] == 'O' && arr[i][1] == 'O'){
            arr[i][0] = '+';
            arr[i][1] = '+';
            flag = 1;
            break;
        }
        if(arr[i][3] == 'O' && arr[i][4] == 'O'){
            arr[i][3] = '+';
            arr[i][4] = '+';
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout<<"NO";
        return 0;
    }
    else{
        cout<<"YES"<<endl;
        for(int i=0; i<n; i++){
            cout<<arr[i]<<endl;
        }
        return 0;
    }
}
