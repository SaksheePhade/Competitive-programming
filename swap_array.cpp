# include <bits/stdc++.h>
using namespace std;

void swap(int *n1,int *n2) {
	int temp;
	temp = *n2;
	*n2 = *n1;
	*n1 = temp;
}

int minimumSwaps(vector<int> arr) {
	int i, j;
	vector<int> count;
	
	for(i=0; i<num; i++) {
		
	}
	
}

int main()
{
	vector<int> arr;
	int num, i, x, res;
	
	cout << "\n\tEnter size : ";
	cin >> num;
	
	cout << "\n\tEnter array elements : ";
	for(i=0; i<num; i++) {
		cin >> x;
		arr.push_back(x);
	}
	
	res = minimumSwaps(arr);
	cout << "\n\tResult : " << res << endl;
}
