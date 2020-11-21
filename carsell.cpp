# include <iostream>
# include <vector>
# include <bits/stdc++.h>
using namespace std;

//int decrement(int x) { if(x!=0)  return (x-1); else return x; } 

int main()
{
	int T,i,j;
	long int N,x, max, profit=0;
	vector<long int> P,Q;
	vector<long int> pro;
	cin >> T;
	while(T--)
	{
		profit = 0;
		P.clear();
		cin >> N;
		for(i=0; i<N; i++)
		{
			cin >> x;
			P.push_back(x);
		}
		sort(P.begin(), P.end());
		for(i=0; i<N; i++)
		{ 
			max = P.at(P.size()-1);
			if(max!=0) max = max - i;
			else max = max;
			P.pop_back();
			if(max>=0) profit = profit + max;
			profit = profit%1000000007;
			//transform(P.begin(), P.end(), P.begin(), decrement);
		}
		pro.push_back(profit);
	}
	for(i=0; i<pro.size(); i++)
		cout << pro.at(i) << endl;
}
