# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;

int findPermutations(int a[]) 
{
	vector<int> sum;
	int max;
	sum.push_back(( a[0]*10 + a[1] + a[2]*10 + a[3] ));
    sum.push_back(( a[2]*10 + a[1] + a[0]*10 + a[3] ));
    sum.push_back(( a[3]*10 + a[1] + a[2]*10 + a[0] ));
    sum.push_back(( a[0]*10 + a[3] + a[2]*10 + a[1] ));
    sum.push_back(( a[0]*10 + a[2] + a[1]*10 + a[3] ));
	max = *max_element(sum.begin(), sum.end());
	return max; 
} 
  
int main()
{
	int T,x,y,i;
	cin >> T;
	int vect[4];
	vector<int> max;
	while(T--) {
		cin >> x >> y;
		vect[0] = (x/10);
		vect[1] = (x%10);
		vect[2] = (y/10);
		vect[3] = (y%10);
		max.push_back(findPermutations(vect));
	}
	for(i=0;i<max.size();i++)
		cout << max.at(i) << endl;
	return 0;	
}
