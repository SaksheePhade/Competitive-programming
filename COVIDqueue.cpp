# include <iostream>
# include <vector>
using namespace std;
int main()
{
	int T, N, i, x;
	vector<int> pos, index;
	vector<string> result;
	cin >> T;
	while(T--)
	{
		index.clear();
		pos.clear();
		cin >> N;
		for(i=0; i<N; i++)
		{
			cin >> x;
			if(x==1) index.push_back(i+1);
			pos.push_back(x);
		}
		for(i=index.size()-1; i>0; i--)
		{
			if((index.at(i) - index.at(i-1)) < 6)
			{
				result.push_back("NO");
				break;
			}
		}
		if(i==0) result.push_back("YES");
	}
	for(i=0; i<result.size(); i++) cout << result.at(i) << endl;
}
