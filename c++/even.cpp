#include<stdio.h>
#include<queue>
#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j,t,first,f,evn=0;
    cin>>n>>m;
    int A[m][2];

    for(i=0;i<m;++i)
    {
        cin>>A[i][0]>>A[i][1];
    }
    int count[n+1];

    for(i=1;i<=n;++i)
    {
        count[i]=1;
    }
    for(i=0;i<m;++i)
    {
        count[A[i][1]]=0;
    }

    queue<int>pq;

    for(i=n;i>=0;--i)
    {

        if(count[i]==0)
        {
            pq.push(i);
            t=0;

            while(!pq.empty())
            {
                first=pq.front();
                pq.pop();
                f=0;
                if(count[first]!=0)
                {
                    t+=count[first];
                    f=1;
                }
                else
                {
                    t++;
                }

                if(f==0)
                for(j=0;j<m;++j)
                {
                    if(A[j][1]==first)
                    pq.push(A[j][0]);
                }

            }
            count[i]=t;

        }
    }

    for(i=2;i<=n;++i)
    {
        if(count[i]%2==0)
        ++evn;
    }
    cout<<evn;
}
