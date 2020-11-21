#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
//# define axis(a) (a=='L'||a=='R')?1:0
int axis(char a)
{
	if(a=='L' || a=='R')
	return 1;
	else
	return 0;
}


int main()
{
	int T,N,i,x=0,y=0;
	vector<int> ans; 
	string S;	
	cin >> T;
	while(T!=0) {
		x=0;
		y=0;
		cin >> N;
		cin >> S;
		i=0;
		while(S[i]!='\0') {
			if(i>0) {
				if( axis(S[i]) != axis(S[i-1]) ) {
					switch(S[i])
					{
						case 'L' : x = x-1;
								   break;
						case 'R' : x = x+1;
								   break;
						case 'U' : y = y+1;
								   break;
					    case 'D' : y = y-1;
								   break;
					}
				}
			}
			else {
				    switch(S[i])
					{
						case 'L' : x = x-1;
								   break;
						case 'R' : x = x+1;
								   break;
						case 'U' : y = y+1;
								   break;
					    case 'D' : y = y-1;
								   break;
				    }
			}
			i++;
		}
		ans.push_back(x);
		ans.push_back(y);
		T--;
	}
	for(i=0; i<ans.size(); i+=2)
		cout << ans.at(i) << " " << ans.at(i+1) <<endl;
}


