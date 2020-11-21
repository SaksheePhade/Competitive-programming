# include <iostream>
# include <vector>
using namespace std;

void minimumBribes(vector<int> q) {
    int i, count=0;
    for(i=0; i<q.size(); i++) {
        if(q.at(i)>i+1) {
            if(q.at(i)-(i+1) > 2) {
                cout << "Too chaotic" << endl;
                return;
            }
            else
                count = count + (q.at(i)-(i+1));    
        }
        else if((i+1)-q.at(i)>2) {
            cout << "\n\tInside else if q is : " << q.at(i) << " i+1 is " << i+1 << endl;
            if(q.at(i-1)<(i)) count++;
        } 
    }
    cout << count << endl;
}
/*
void display(vector<int> q) {
	int i;
	for
}
*/
int main()
{
	int size, i, x;
	vector<int> q;
	cout << "\n\tEnter size : ";
	cin >> size;
	cout << "\n\tEnter elements : ";
	for(i=0; i<size; i++) {
		cin >> x;
		q.push_back(x);
	}
	cout << endl;
	minimumBribes(q);
	
	return 0;
}
