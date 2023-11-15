// #include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	char s1[]="GEEKSFORGEEKS";
	char s2[]="GRGESW";
	
	int i=0;
	int j=0;
	
	while(i<s1.length() && j<s2.length() ){
	    if(s1[i]==s2[j]){
	        i++;
	        j++;
	    }else
	        i++;
	}
	if(j==s2.length())
	    printf("True");
	else
	    printf("False");
	
	return 0;
}
