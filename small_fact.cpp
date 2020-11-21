# include <iostream>
# include <vector>
using namespace std;

int main()
{
	int T, x, i, temp;
	vector<int> vect;
	cin >> T;
	while(T--)
	{
		cin >> x;
		
		for(i=x-1; i>=1; i--)
		{
			x = x * i; 
		}
		
		vect.push_back(x);
	}
	
	for(i=0; i<vect.size(); i++)
	{
		cout << vect.at(i) << endl;
	}
	
}
