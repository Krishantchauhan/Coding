
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s1="GEEKSFORGEEKS";
	string s2="FORGEEKSGEESK";
	
	if(s1.length() != s2.length()){
	    printf("False");
	    return 0;
	}
	sort(s1.begin() , s1.end());
	sort(s2.begin() , s2.end());
	if(s1==s2)
	    printf("True");
	else
	    printf("False");
	
	return 0;
}
