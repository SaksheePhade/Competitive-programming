# include <iostream>
# include <vector>
# include <bits/stdc++.h> 
using namespace std;

int main()
{
	int T,N,i,x,maxA,maxB;
	vector<int> A;
	vector<int> B;
	vector<string> res;
	cin >> T;
	while(T--) {
	    A.clear();
	    B.clear();
		cin >> N;
		for(i=0; i<N; i++) {
			cin >> x;
			A.push_back(x);
		}
		for(i=0; i<N; i++) {
			cin >> x;
			B.push_back(x);
		}
		maxA = *max_element(A.begin(), A.end());
		maxB = *max_element(B.begin(), B.end());
		if(maxA==maxB) res.push_back("NO");
		else res.push_back("YES");
	}
	for(i=0; i<res.size(); i++)
	    cout << res.at(i) << endl;
}
