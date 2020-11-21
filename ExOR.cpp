# include <iostream>
using namespace std;

int main()
{
	int arr[] = {2,2,5,9,7,9,7,1,1,9,5};
	
	int odd = 0,i;
	for(i=0; i<11; i++) {
		odd = odd^arr[i];
		cout << endl << i << " : " << odd << " , arr[i] : " << arr[i];
	}
}
