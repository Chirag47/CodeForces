#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<long long int> arr;
vector<long long int> arr1;

int binarySearch(vector<long long int>arr, int l, int r,long long int x)
{
   if (r >= l)
    {
        int mid = l + (r - l)/2;
        if (arr[mid] == x)  return mid;
        if (arr[mid] > x) return binarySearch(arr, l, mid-1, x);
        return binarySearch(arr, mid+1, r, x);
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        long long int a;
        cin>>a;
        arr.push_back(a);
        arr1.push_back(a);
    }
    sort(arr.begin(),arr.end());
    sort(arr1.begin(),arr1.end());
    for(int i=0; i<n-1; i++){
        long long int a;
        cin>>a;
        int j = binarySearch(arr,0,arr.size(),a);
        arr.erase(arr.begin()+j);
    }

    long long int z;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] > 0)
            z = arr[i];
    }
    cout<<z<<endl;
    int j = binarySearch(arr1,0,arr1.size(),z);
    arr1.erase(arr1.begin() + j);
    for(int i=0; i<n-2; i++){
        long long int a;
        cin>>a;
        int j = binarySearch(arr1,0,arr1.size(),a);
        arr1.erase(arr1.begin()+j);
    }

    for(int i=0; i<arr1.size(); i++){
        if(arr1[i] > 0)
            z = arr1[i];
    }
    cout<<z<<endl;
    return 0;
}
