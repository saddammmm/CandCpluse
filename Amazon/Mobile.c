#include<stdio.h>
#include<stdlib.h>
int main()
{

    int n,i,j;
    scanf("%d",&n);
    long long c[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        scanf("%llu",&c[i][j]);

    }
    long long t=0,x=0;
    for(i=0;i<n;i++)
    {

        t+=abs(c[i][0]-c[1][i]);

    }

    printf("%llu",t-c[1][n-1]);

}
