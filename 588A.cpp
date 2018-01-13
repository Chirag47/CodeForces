#include <iostream>
#include <vector>
using namespace std;

vector<int> prices;
vector<int> requirements;
int calcCost(int pos,int min){
	int cost = 0;
	for(int i=requirements.size()-1;i>=pos;i--){
		cost += requirements[i] * min;
		requirements.pop_back();
		prices.pop_back();
	}
	return cost;
}
int main(){
	
	int n;
	cin>>n;
	int a,p;
 	int pos = 0,cost = 0;
	int min = 101;
	
 	for(int i=0;i<n;i++){
		cin>>a>>p;
		requirements.push_back(a);
		prices.push_back(p);
		if(p<min){
			min = p;
			pos = i;
		}
	}
	do{
		cost += calcCost(pos,min);
		min = 101;
		for(int i=0; i<prices.size();i++){
			if(prices[i]<min){
				min = prices[i];
				pos = i;
			}
		}
	}while(prices.size()>0 && requirements.size()>0);	
	cout<<cost;
	return 0;
}