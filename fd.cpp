# include <bits/stdc++.h>
#include <vector>
using namespace std;

int max(vector<int> vect) {
	int i, max;
	max = vect[0];
	for(i=0; i<vect.size(); i++) {
		if(vect[i]>=max) max=vect[i];
	}
		
	return max;
}

int findIndex(vector<int> vect, int num) {
	int i;
	for(i=0; i<vect.size(); i++) {
		if(num==vect[i]) {
			return i;
		}
	}
	
	return -1;
}



int main()
{
	int i, n, x, max;
	vector<int> vect;
	vector<int> temp;
	cout < "\n\tEnter size : "
	cin >> n;
	
	for(i=0; i<n; i++) {
		cin >> x;
		vect.push_back(x);
	}
	
	temp = vect;
	
	max1 = max(vect);
	
}
