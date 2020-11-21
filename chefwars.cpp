# include <iostream>
# include <vector>
using namespace std;

int main()
{
	long long int T, P, H, i;
	vector<int> result;
	cin >> T;
	while(T--) {
		cin >> H >> P;
		while(H>0 && P>0) {
			H = H - P;
			P = P/2;
		}
		if(H<=0) result.push_back(1);
		else result.push_back(0);
	}
	for(i=0; i<result.size(); i++) cout << result.at(i) << endl;
}
