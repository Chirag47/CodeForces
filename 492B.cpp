#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main(){
    int n, l,i,j;
    cin>>n>>l;
    vector<int> v;
    for(int i=0; i<n; i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    sort(v.begin(), v.end());
    long long int d1,d2,d3,d;
    d1 = v[0] - 0;
    d3 = l - v[n-1];
    if(d1>d3)
        d = d1;
    else
        d = d3;
    printf("d1:%d d3:%d d:%d\n",d1,d3,d);
    long long int u = v[1];
    if(n>=2)
        d2 = v[1] - v[0];
    else
        d2 = 0;
    for(int i=2; i<n; i++){
        long long int k;
        k = v[i] - u;
        if(k>d2)
            d2 = k;
        u = v[i];
    }
    printf("d2:%d",d2);
    double max = (double)d2/2;
    if(max<d)
        max = d;
    printf("%.10f",max);
    return 0;
}

