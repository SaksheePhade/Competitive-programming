# include <bits/stdc++.h>
using namespace std;

int main()
{
	int T,i;
	long long int N, count=0;
	string S;
	vector<int> result;
	cin >> T;
	while(T--) {
		cin >> S;
		count = 0;
		for(i=1; i<S.length(); i++) {
			
			if(S[i-1]!=S[i]) {
				count++;
				i++;
			}
		}	
		result.push_back(count);
	}
	for(i=0; i<result.size(); i++) cout << result.at(i) << endl;
}
