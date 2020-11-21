# include <iostream>
# include <vector>
using namespace std;

int main()
{
	int T, i, x, y, z, t, j;
	cin >> T;
	int N[10000], K[10000], L[10000];
	
	for(i=0; i<T; i++) {
		cin >> N[i] >> K[i] >> L[i];
	}
	
	for(t=0; t<T; t++) {
		
	//	cout << "Test case " << t << endl;
	//	cout << "N : " << N[t] << endl;
	//	cout << "K : " << K[t] << endl;
	//	cout << "L : " << L[t] << endl;
		
		if(N[t]>K[t] && L[t]==1) {
			cout  << -1 ;
		}
		else if(N[t]<K[t]) {
		    cout << -1;
			for(i=0; i<K[t]-N[t]; i++) {
				cout << i+1 << " ";
			}
		}
		else if( K[t]*(L[t]-1) < N[t]-K[t] ) cout << -1 << endl; 
		else {
			for(i=0; i<K[t]; i++) {
				//cout << "\nfor i";
				cout << i+1 << " ";
			}
			for(i=0, j=0; i<N[t]-K[t]; i++, j++) {
				//cout << "\nfor j";
				cout << j+1 << " ";
			}
		}
		cout << endl;
	}
	 
}

