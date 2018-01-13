
#include <iostream>
#include <Math.h>
using namespace std;
int Sum(long int a){
    int s=0;
    while(a>0){
        int k = a%10;
        s += k;
        a = a/10;
    }
    return s;
}
int minSum(int m){
    if(m == 1){return 0;}
    else {return 1;}
}
int maxSum(int m){
    return 9*m;
}
int main(){
    int m,s;
    int flag = 0, flag1 = 0;
    long int min=-1,max=-1;
    long int i,j;
    cin>>m>>s;
    if(m == 1 && s==0){
        cout<<"0 0";
        return 0;
    }
    if(s < minSum(m) || s > maxSum(m)){
        cout<<"-1 -1";
        return 0;
    }
    int x = pow(10,m-1);
    int y = pow(10,m);
    for(i = x; i <= y - 1; ){
        //cout<<"I : "<<i<<endl;
        //cout<<"Sum(I): "<<Sum(i)<<" Sum(J): "<<Sum(j)<<endl;
        //Finding Min
        if(flag == 0){
            if(s == Sum(i)){
                //cout<<s<<"=="<<Sum(i)<<endl;
                min = i;
                flag = 1;
            }
            else if(s <= Sum(i+9)){
                for(long int e = i+1; e<=i+9; e++){
                    if(s == Sum(e)){
                        //cout<<s<<"=="<<Sum(e)<<endl;
                        min = e;
                        flag = 1;
                    }
                }
                i = i+10;
            }
            else
                i = i+10;
        }
        //cout<<" J : "<<j<<endl;
        //Finding Max
        if(flag1 == 0){
            if(s == Sum(j)){
                //cout<<s<<"=="<<Sum(j)<<endl;
                max = j;
                flag1 = 1;
            }
            else if(s < Sum(j-9))
                j = j-10;
            else{
                for(long int e = j-1; e>=j-9; e--){
                    if(s == Sum(e)){
                        //cout<<s<<"=="<<Sum(e)<<endl;
                        max = e;
                        flag1 = 1;
                    }
                }
                j = j-10;
            }
        }
        if(flag == 1 && flag1 == 1)
            break;
    }
    cout<<min<<" "<<max;
    return 0;
}
