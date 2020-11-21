#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int t,n;
    long long int a[100000];
    set<long long int> s;
    cin>>t;
    while(t--)
    {
        
        cin>>n;
        s.clear();
        for(int i=0;i<n;i++)
        {cin>>a[i];
            s.insert(a[i]);
        }
        if(s.find(0)!=s.end())
        {cout<<s.size()-1<<"\n";}
        else
        {
            cout<<s.size()<<"\n";
        }
        
        
    }
	// your code goes here
	return 0;
}
