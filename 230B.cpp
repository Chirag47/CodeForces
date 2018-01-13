#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a;
    for(int i=0;i<n;i++){
    	cin>>a;
    	int count = 0;
    	for(int j=2;j<=sqrt(a);j++){
    		if(a%j == 0){
    			count++;
    		}
    		if(count>1)
    			break;
    	}
    	if(count == 1){
    		cout<<"YES"<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}
    }
    return 0;
}