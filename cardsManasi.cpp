#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	vector<long int> result;
	long int i;
	while(t--)
	{
	    long int A,B;
	    int rounds;
	    
	    cin>>rounds;
	    int chef=0,morty=0;
	    while(rounds--)
	    {
	        //std::vector<long int>v ;
	        cin>>A>>B;
	        int c=0,m=0;
	        while(A>0)
	        {
	            int sum=0;
	            
	            int p=A%10;
	            
	            c=c+p;
	            A=A/10;
	            
	        }
	        while(B>0)
	        {
	            int sum=0;
	            
	            int p=B%10;
	            
	            m=m+p;
	            B=B/10;
	        }
	        if(c>m)
	        {
	            chef++;
	        }
	       else if(c<m)
	            morty++;
	       
	      
	    }
	    if(chef>morty) {
	    	result.push_back(0);
			result.push_back(chef);
		}
		else if(chef<morty) {
			result.push_back(1);
			result.push_back(morty);
		}
		else {
			result.push_back(2);
			result.push_back(chef);
		}
	   
	}
	
	for(i=0; i<result.size()-1; i=i+2) cout << result.at(i) << " " << result.at(i+1) << endl;

}
