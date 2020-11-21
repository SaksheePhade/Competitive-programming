
#include <iostream>
using namespace std;

int main()
{
	int M,N,T,key[50];
	int F[50],P[50];
	int i,j,k;
	cin >> T;
	while(T!=0) {
		cin >> N >> M;
		for(i=1;i<=N;i++) {
			cin >> F[i];
	    }
		for(i=1;i<=N;i++) {
	    	cin >> P[i];
	    }
		T--;
	}
	k=0;
	
	for(i=1;i<=M;i++)
		key[i]=0;
	
	for(i=1;i<=M;i++) {
		for(j=1;j<=N;j++) {
			if(F[j]==i) {
				key[i]++;
				key[i] = key[i]*P[j];
			}
		}
	}
	
	int min = key[1];
	for(i=1;i<=M;i++) {
		if(min > key[i]) {
		    if(key[i]!=0) 
			    min = key[i];
		}	
	}	
	cout << min;
	return 0;
}
