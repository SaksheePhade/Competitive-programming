# include <bits/stdc++.h>
# include <vector>
using namespace std;

int main()
{
	int T;
	long long int i, j, k;
	long long int N, x, diff, count;
	vector<long long int> heights, result;
	cin >> T;
	while(T--) {
		heights.clear();
		count = 0;
		cin >> N;
		for(i=0; i<N; i++) {
			cin >> x;
			heights.push_back(x);
		}
		sort(heights.begin(), heights.end(), greater<long long int>());
		i=0;
		
		while(i!=N) {
			j=i;
			while(j+1 <= N-1 && heights[j+1]==heights[j]) {
				j++;
				if(j==N-1) break;
			}		
			count++;
			if(j==N-1) break;
			for(k=0; k<=j; k++) 
				heights[k] = heights[j+1];
				
			i = j+1;		
		}
		result.push_back(count);	
		
	}
	
	for(i=0; i<result.size(); i++)
		cout << result.at(i) << endl;
	
}
