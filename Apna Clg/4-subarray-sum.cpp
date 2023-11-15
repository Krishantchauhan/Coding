#include<stdio.h>

int main(){
    int a[] = {1,2,3,7,5};
    int n = 5;
    int s=44;

    int low=-1,high=-1,i=0,j=0,sum=0;

    while(j<n && sum+a[j]<=s){
        sum+=a[j];
        j++;
    }

    if(sum==s){
        printf("%d %d",low+1,high+1);
        return 0 ;
    }

    while(j<n){
        sum+=a[j];

        while(sum>s){
            sum-=a[i];
            i++;
        }

        if(sum==s){
            low=i++;
            high=j++;
            break;
        }
        j++;
    }

    printf("%d %d",low+1,high+1 );

    return 0;
}