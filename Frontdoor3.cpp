#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void strokesRequired(vector<string> picture) {
    char arr[100000][100000];
    long int i, j;
    for(i=0; i<picture.size(); i++) {
        for(j=0; j<picture[i].size(); j++) {
            arr[i][j] = picture[i][j];
            cout << " " << arr[i][j];
        }
        cout << endl;
    }
    
    for(i=0; i<picture.size(); i++) {
        for(j=0; j<picture[i].size(); j++) {
            cout << " " << arr[i][j];
        }
        cout << endl;
    }
}

int main()
{
	int i;
	vector<string> vect;
	long int n;
	string x;
	cout << "\n\tEnter size : ";
	cin >> n;
	for(i=0; i<n; i++) {
		cout << "\n\tEnter string : ";
		cin >> x;
		vect.push_back(x);
	}
	
	strokesRequired(vect);
	
	return 0;
}
