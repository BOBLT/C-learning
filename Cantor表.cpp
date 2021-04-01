/*
1/1    1/2    1/3    1/4    1/5 ...
2/1    2/2    2/3    2/4 ...
3/1    3/2    3/3 ...
4/1    4/2 ...
5/1 ...
...
*/


#include<stdio.h>
int main()
{
    int n,i=0,j=0;
    scanf("%d",&n);
    while(j<n)
    {
        i++;
        j+=i;
    }
    if(i%2==1)
    {
        printf("%d/%d",j-n+1,n+i-j);
    }    
    else
    {
        printf("%d/%d",n+i-j,j-n+1);
    }    
    return 0;
}
