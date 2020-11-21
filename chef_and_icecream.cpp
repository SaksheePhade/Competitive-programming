# include <bits/stdc++.h>
using namespace std;

int main()
{
	int T,i,x,N;
	int five, ten, fifteen;
	vector<string> result;
	cin >> T;
	while(T--) {
		cin >> N;
		five=0;
		ten=0;
		fifteen=0;
		for(i=0; i<N; i++) {
			cin >> x;
			if(x==5) {
				five++;
			} 
			else if(x==10) {
				if(five!=0) {
					five--;
					ten++;
				}
				else break;
			}
			else if(x==15) {
				if(ten!=0) {
					ten--;
					fifteen++;
				}
				else {
					if(five>=2) {
						five = five - 2;
						fifteen++;
					}
					else break;
				}
			}
		}
		if(i==N) result.push_back("YES");
		else result.push_back("NO");
	}
	
	for(i=0; i<result.size(); i++) cout << result.at(i) << endl;
}
