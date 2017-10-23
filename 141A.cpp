#include <iostream>

using namespace std;
int main(){
    string a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    int l1 = a.length();
    int l2 = b.length();
    int l3 = c.length();
    int freq[26] = {0};
    int freq1[26] = {0};
    if(l1+l2 != l3){
        cout<<"NO";
        return 0;
    }
    for(int i=0; i<a.length(); i++){
        int k = (int)a[i] - 65;
        freq[k] += 1;
    }
    for(int i=0; i<b.length(); i++){
        int k = (int)b[i] - 65;
        freq[k] += 1;
    }
    for(int i=0; i<c.length(); i++){
        int k = (int)c[i] - 65;
        freq1[k] += 1;
    }
    for(int i=0; i<26; i++){
        if(freq[i] != freq1[i]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
