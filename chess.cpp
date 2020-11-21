# include <iostream>
# include <vector>
using namespace std;

void display(char mat[8][8]) {
	int i, j;

	for(i=0; i<8; i++) {
		for(j=0; j<8; j++) {
			cout << mat[i][j] ;
		}
		cout << endl;
	}
}

int main()
{
	int  T, i, j, c;
	int K[65];
	char chess[8][8];
	cin >> T;
	
	for(i=0; i<T; i++) cin >> K[i];
	
	c=0;
	while(c<T) {
		
		for(i=0; i<8; i++) {
			for(j=0; j<8; j++) {
				chess[i][j] = 'X';
			}
		}
	
		chess[0][0] = 'O';
		
		j=0;
		for(i=1; i<K[c]; i++) {
			
			if(i%8==0) j+=1;
			chess[j][i%8] = '.';
		}
		
		display(chess);
		c++;
	}
	
}



