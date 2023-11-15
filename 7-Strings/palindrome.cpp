
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string name="aba";
	int low=0;
	int high=name.length()-1;
	int flag=0;
	
	while(low<=high){
	    if(name[low]!=name[high]){
	        printf("Not a palindrome");
	        flag=1;
	        break;
	    }
	   low++;
	   high--;
	}
	if(flag==0){
       printf("palindrome");
	}
	
	return 0;
}
