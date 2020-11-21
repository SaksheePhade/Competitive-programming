#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

char *removeSpaces(char *str) 
{ 
    int i = 0, j = 0; 
    while (str[i]) 
    { 
        if (str[i] != ' ') 
           str[j++] = str[i]; 
        i++; 
    } 
    str[j] = '\0'; 
    return str; 
} 

string findPalindrome(string Palin) {
    int i=0,j=0,k;
   
    while (Palin[i]) 
    { 
        if (Palin[i] != ' ') 
           Palin[j++] = Palin[i]; 
        i++; 
    } 
    Palin[j] = '\0'; 
    
    
    int n = Palin.size(); 
    int maxLength = 1, start = 0; 
   
    for (i = 0; i < Palin.length(); i++) { 
        for (j = i; j < Palin.length(); j++) { 
            int flag = 1; 
            
            for (k = 0; k < (j - i + 1) / 2; k++) 
                if (Palin[i + k] != Palin[j - k]) 
                    flag = 0; 
  
            if (flag && (j - i + 1) > maxLength) { 
                start = i; 
                maxLength = j - i + 1; 
            } 
        } 
    } 
  
  	char str[1001];
  	
	j=0;
	for(i=start; i<=(start+maxLength-1); ++i) {
    	str[j++] = Palin[i];
	}
	str[j] = '\0';

	return str;		 
}

int main()
{
	string s;
	cout << "\n\tEnter string : ";
	getline(cin, s);
	cout << findPalindrome(s);
	return 0;
}
