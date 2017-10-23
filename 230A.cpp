#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct {
    int x;
   int y;
}dragon;

bool compare(dragon a, dragon b){
    return (a.y > b.y);
}
int main(){
    int n,s;
    cin>>s>>n;
    vector<dragon> dragons;
    for(int i=0; i<n; i++){
        dragon a;
        cin>>a.x;
        cin>>a.y;
        dragons.push_back(a);
    }
    sort(dragons.begin(), dragons.end(), compare);//compares the vector on structure on compare() function
    while(!dragons.empty()){
        int flag = 0;
        for(int i=0; i<dragons.size(); i++){
            if(s>dragons[i].x){
                s += dragons[i].y;
                flag = 1;
                dragons.erase(dragons.begin() + i);//deletes ith element from he start in the vector
            }
        }
        if(flag == 0){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
