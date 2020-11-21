# include <bits/stdc++.h>
# include <vector>
using namespace std;

int main()
{
	long int T,i;
	unsigned long int S, N, q,r;
	vector<unsigned long int> result;
	cin >> T;
	while(T--) {
		cin >> S >> N;
		q = S/N;
		if(S<N) {
			if(S%2==0 || S==1) result.push_back(1);
			else result.push_back(2);
		}
		else {
			r = S%N;
			if(r==0) result.push_back(q);
			else if(r==1) result.push_back(q+1);
			else if(r%2==0) result.push_back(q+1);
			else result.push_back(q+2);
		}
	}
	
	for(i=0; i<result.size(); i++) cout << result.at(i) << endl;
	
}
