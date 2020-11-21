# include <iostream>
# include <vector>
# include <string.h>
# include <typeinfo>
using namespace std;

int main()
{
	int T, i, x, j;
	int N;
	long long int K; 
	long long int y, D;
	//char res[1000];
	vector<vector<char> > result;
	//string res;
	int size;
	
	cin >> T;
	for(i=0; i<T; i++) {
		cin >> N >> K;
		
		for(j=0; j<N; j++) {
			cin >> D;
			if(D%K) result[i].push_back('0');
			else result[i].push_back('1');
			
			//cout << "\nInside for j : " << res[j];
		}
		cout << "\n" << i << " : \n" ;
		for(j=0; j<result[i].size(); j++) cout << result[i].at(j);
		
	}
	
	for(i=0; i<result.size(); i++) {
		for(j=0; j<result[i].size(); j++) cout << result[i].at(j);
		cout << endl;
	}
	
}
