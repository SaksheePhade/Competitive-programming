# include <bits/stdc++.h>
# include <vector>
using namespace std;

int main()
{
	int i, T, N, X, Y, K, j;
	cin >> T;
	vector<string> result;
	while(T--) {
		cin >> N >> K >> X >> Y;			
		i=X;
		i=(X+K)%N;
		while(i!=X) {
			if(i==Y) {
				result.push_back("YES");
				break;
			}
			i=(i+K)%N;			
		}
		if(i==X) result.push_back("NO");
		if(X==Y) result.push_back("YES");
	}
	
	for(i=0; i<result.size(); i++)
		cout << result.at(i) << endl;
	
}
