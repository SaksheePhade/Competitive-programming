# include <bits/stdc++.h>
# include <iostream>
# include <vector>
using namespace std;

int ExOR(vector<long long int> arr,long long int size) {
	long long int i, odd=0;
	
	odd = arr[0];
	
	for(i=1; i<(4*size-1); i++) {
		odd = odd ^ arr.at(i);
	}
	return odd;
}

int main()
{
	int T;
	vector<int> result;
	long long int N, i;
	long long int x, y;
	vector<long long int> X, Y;
	
	cin >> T;
	
	while(T--) {
		cin >> N;
		
		X.clear();
		Y.clear();
		
		for(i=0; i<(4*N-1); i++) {
			cin >> x >> y;
			X.push_back(x);
			Y.push_back(y);
		}
		
		result.push_back(ExOR(X,N));
		result.push_back(ExOR(Y,N));
	}
	
	for(i=0; i<result.size()-1; i=i+2) cout << result.at(i) << " " << result.at(i+1) << endl;
	
}
