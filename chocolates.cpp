#include <iostream>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;
int main()
{
	int T,N,i,x,max, count=0, max1;
	vector<int> W;
	cin >> T;
	while(T!=0) {
		count = 0;
		cin >> N;
		for(i=0; i<N; i++) {
			cin >> x;
			W.push_back(x);
		}
		max = *max_element(W.begin(), W.end());
		do {
			rotate(W.begin(), W.begin()+W.size()-1, W.end()); 
		    
			max1 = *max_element(W.begin(), W.begin()+N/2);
			count++;
		}while(max1!=max);
		cout << count-1 << endl;
		W.clear(); 
		T--;
	} 
}
