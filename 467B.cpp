#include <iostream>
using namespace std;
int main(){
	int n,m,k,count = 0;
	cin>>n>>m>>k;
	int binaries[m+1][21] = {0};
	int z,pos;
	for(int i=0;i<=m;i++){
		cin>>z;
		pos = 20;
		while(z>0){
			binaries[i][pos] = z%2;
			z = z/2;
			pos--;
		}
	}
	for(int i=0;i<m;i++){
		z = k;
		for(int j=0;j<21;j++){
			if(binaries[i][j] != binaries[m][j]){
				z--;
			}
		}
		if(z >= 0){
			count++;
		}
	}
	cout<<count;
	return 0;
}