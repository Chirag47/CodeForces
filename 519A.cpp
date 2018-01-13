#include <iostream>
using namespace std;
#define QUEEN 9;
#define ROOK 5;
#define BISHOP 3;
#define KNIGHT 3;
#define PAWN 1;


int main(){
	int costWhite = 0;
	int costBlack = 0;
	char c[8][8];
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			cin>>c[i][j];
			if(c[i][j]!='.'){
				if(c[i][j]=='Q'){
					costWhite += QUEEN;
				}
				else if(c[i][j]=='q'){
					costBlack += QUEEN;
				}
				else if(c[i][j]=='R'){
					costWhite += ROOK;
				}
				else if(c[i][j]=='r'){
					costBlack += ROOK;
				}
				else if(c[i][j]=='B'){
					costWhite += BISHOP;
				}
				else if(c[i][j]=='b'){
					costBlack += BISHOP;
				}
				else if(c[i][j]=='N'){
					costWhite += KNIGHT;
				}
				else if(c[i][j]=='n'){
					costBlack += KNIGHT;
				}
				else if(c[i][j]=='P'){
					costWhite += PAWN;
				}
				else if(c[i][j]=='p'){
					costBlack += PAWN;
				}
			}
		}
	}
	if(costWhite>costBlack){
		cout<<"White";
	}
	else if(costBlack>costWhite){
		cout<<"Black";
	}
	else{
		cout<<"Draw";
	}
	return 0;
}