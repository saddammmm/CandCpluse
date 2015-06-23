#include<stdio.h>
void fillDepth(int parent[],int i,int depth[])
{

    if(depth[i])
    {

        return;
    }
    if(parent[i]==-1)
    {
        depth[i]=1;
        return;

    }
    if(depth[parent[i]]==0)
    {
        fillDepth(parent,parent[i],depth);

    }
    depth[i]=depth[parent[i]]+1;
}
int  con(int parent[],int n)
{

    int  depth[n],i=0;
    for(i=0;i<n;i++)
        depth[i]=0;
     for(i=0;i<n;i++)
        fillDepth(parent,i,depth);
     int ht=depth[0];
     for(i=1;i<n;i++)
     if(ht<depth[i])
        ht=depth[i];
     return ht;
}
void main()
{

    int parent[] = {-1, 0, 0, 1, 1, 3, 5};
    int n=sizeof(parent)/sizeof(parent[0]);

    printf("%d",con( parent, n));

}
