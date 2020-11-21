#include <bits/stdc++.h> 
# include <iostream>
using namespace std;

int main()
{
	int T, N, M, B, x[5001];
	int i, remainder, blocks[5000], loaded=0, temp;
	vector<int> result;
	cin >> T;
	while(T--) {
		loaded = 0;
		cin >> N >> B >> M;
		
	/*	remainder = N%B;
		if(remainder) blocks = (N/B) + 1;
		else blocks = N/B;
	*/	
		for(i=0; i<M; i++) {
			cin >> x[i];
			blocks[i] = x[i]/B;
		}
		for(i=0; i<M; i++) {
			if(loaded==0) {
				temp = blocks[i];
				loaded++;
			}
			else {
				
				if(blocks[i]!=temp) loaded++;
				temp = blocks[i];
			}
		}
		result.push_back(loaded);
	}
	
	for(i=0; i<result.size(); i++) cout << result.at(i) << endl;
	
}
