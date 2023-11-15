#include<stdio.h>

int main()
{
    int a[] = {10,10,10,30,30,70};
    int s = sizeof(a) / sizeof(a[0]);

    int i=1,count=1;

    while (i<s)
    {
        while(i<s && a[i]==a[i-1]){
            count++;
            i++;
        }
        printf("%d - %d \n",count, a[i-1]);
        i++;
        count=1;
    }
    if(s==1 || a[s-1]!=a[s-2]){
        printf("1 - %d ", a[i-1]);
    }
    
    
    
}