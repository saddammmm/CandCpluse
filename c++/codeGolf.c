#include<iostream>
#include <math.h>
using namespace a;
int main()
{
    int t,n;
    cin>>t>>n;
    double r;
    while(t>0)
    {
        for(int i=0;i<n;i++)
        {
            r+=pow(-1,i)/(2*i+1);
        }

    }
    cout<<r;
}
