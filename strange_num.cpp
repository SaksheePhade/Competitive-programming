# include <iostream>
# include <vector>
using namespace std;

int isPrime(int n) {
	int count=0,i;
	for(i=2; i<n; i++) {
		if(n%i==0) break;
	}
	if(i==n) return 1;
	else return 0;
}

int main()
{
	int T, i, j, flag=0;
	long int X, K, count, prime;
	vector<int> result;
	cin >> T;
	while(T--) {
		flag=0;
		cin >> X >> K;
		for(long long int i=0; i<1000;i++) {
			count = 0; prime=0;
			for(j=i; j>0; j--) {
				if(i%j==0) {
					count++;
					if(isPrime(i/j)) prime++;
				}
			}
			if(count==X && prime==K) {
				flag=1;
				break;
			} 
		}
		if(flag==1) result.push_back(1);
		else result.push_back(0);
	}
	for(i=0; i<result.size(); i++) cout << result.at(i) << endl;
	return 0;
}
