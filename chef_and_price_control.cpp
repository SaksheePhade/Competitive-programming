#include <bits/stdc++.h> 
# include <iostream>
# include <vector>
using namespace std;

int main() {
	
	int T, N, K, i, x, sum=0;
	cin >> T;
	vector<int> result;
	
	while(T--) {
		cin >> N >> K;
		sum = 0;
		for(i=0; i<N; i++) {
			cin >> x;
			if(x>K) {
				sum = sum + (x-K);
			}
		}
		
		result.push_back(sum);
		
	}
	
	for(i=0; i<result.size(); i++) cout << result.at(i) << endl;
	
	
}
