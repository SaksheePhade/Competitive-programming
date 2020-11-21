#include <bits/stdc++.h>
#include <vector>
using namespace std;

int power(long long int x) {
	long long int q, r,tens, sum=0;
	tens = 10;
	int flag=0;
	while(flag!=1) {
		r = x%10;
		sum = sum + r;
		q = x/tens;
		if(q==0) {
			r = x%10; 
			if(r==0) flag=1;
			else flag = 0;
		}
		x = q;
	}
	return sum;
}

int main() {
	int T, N, i, pointsA, pointsB;
	long long int A,B,temp,sum=0;
	vector<long long int> result;
	cin >> T;
	while(T--) {
		cin >> N;
		pointsA = 0;
		pointsB = 0;
		for(i=0; i<N; i++) {
			cin >> A >> B;
			if(power(A) > power(B)) pointsA++;
			else if(power(A) < power(B)) pointsB++;
			else {
				pointsA++;
				pointsB++;
			} 
		}
		if(pointsA > pointsB) {
			result.push_back(0);
			result.push_back(pointsA);
		}
		else if(pointsB > pointsA) {
			result.push_back(1);
			result.push_back(pointsB);
		}
		else {
			result.push_back(2);
			result.push_back(pointsA);
		}
	}
	
	for(i=0; i<result.size()-1; i=i+2) cout << result.at(i) << " " << result.at(i+1) << endl;
}
