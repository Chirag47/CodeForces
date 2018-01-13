#include <iostream>
using namespace std;

int main(){
    int n,m,x,y;
    cin>>n>>m;
    int min = n + 1;
    int k=1;
    y = n - (k*m);
    x = (k*m) - y;
    while(x+y <= n){
    	if(x>=0 && y>=0 && x+y<min){
    		min = x+y;
    	}
    	k++;
    	y = n - (k*m);
		x = (k*m) - y;
    }
    if(min <= n){
	cout<<min;
    }
    else{
    	cout<<"-1";
    }
    return 0;
}


