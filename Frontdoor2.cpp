#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

long pilesOfBoxes(vector<int> boxesInPiles) {
    long int i, j, k;
    long count=0;
    int max;
    int flag=0;
    
    sort(boxesInPiles.begin(), boxesInPiles.end(), greater<int>()); 
    for(i=0; i<boxesInPiles.size(); i++) {

        flag=0;
        j=i;

        if(j==boxesInPiles.size()-1) {
            flag=1;
            break;        
        }
        while(boxesInPiles[j+1]==boxesInPiles[j]) {
            j++;
            if(j==(boxesInPiles.size()-1)) {
                flag=1;
                break;
            }

        }
        
        if(flag==1) break;
        
        for(k=j; k>=0; k--) {
            boxesInPiles[k] = boxesInPiles[j+1];
            count++;
        }
       
    }

    return count;

}
int main()
{
	int i;
	vector<int> vect;
	int n, x;
	cout << "\n\tEnter size : ";
	cin >> n;
	for(i=0; i<n; i++) {
		cin >> x;
		vect.push_back(x);
	}
	
	cout << "\n\tCount : " << pilesOfBoxes(vect);
	return 0;
}
