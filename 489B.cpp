#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;
bool comparator(int a,int b){
	return a>b;
}
int main(){
	int n,m,z;
	int count = 0;
	vector<int> a;
	vector<int> b;

	cin>>n;
	for(int i=0;i<n;i++){
		cin>>z;
		a.push_back(z);
	}
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>z;
		b.push_back(z);
	}

	sort(a.begin(),a.end(),comparator);
	sort(b.begin(),b.end(),comparator);
	
	z = 0;
	for(int i=0;i<n;i++){
		int j = z;
		while(j<m){
			if( abs(a[i]-b[j]) <= 1){
				z = j+1;
				j=m;
				count++;
			}
			else{
				j++;
			}
		}
	}
	cout<<count;
	return 0;

}