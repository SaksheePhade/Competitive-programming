#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
	int T;
	long long int N,x,i,temp,sum=0,prev,diff;
	vector<long long int> result;
	cin >> T;
	while(T--) {
		cin >> N;
		sum = 0;
		for(i=0; i<N; i++) {
			
			cin >> x;
			if(i==0) prev = x;
			else {
				diff = abs(prev - x)
				if(diff) diff = diff-1;
				sum = sum + diff;
				prev = x;
			}		
		}
		result.push_back(sum);
	}
	
	for(i=0; i<result.size(); i++) cout << result.at(i) << endl;
	return 0;
}
