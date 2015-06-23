#include<stdio.h>
#include<stdlib.h>
int main()
{

    int n,m,i,j;
    scanf("%d%d",&n,&m);
    //scanf("%d",&m);
    int cho[n-1];
    int c[m][2];
    for(i=0;i<n-1;i++)
    {

        scanf("%d",&cho[i]);

    }

     for(i=0;i<m;i++)
    {
        for(j=0;i<2;j++)
          {
              scanf("%d",&c[i][j]);
          }
    }

int maxp=0;
int maxm[m];
for(i=0;i<m;i++)
{
    maxm[i]=hcf(cho[c[i][0]],cho[c[i][1]]);

}
for(i=0;i<m;i++)
{
    printf("%d",maxm[i]);

}
return 0;

}
int hcf(int num1,int num2)
{

    while(num1!=num2)
    {
        if(num1>num2)
            num1-=num2;
        else
            num2-=num1;
    }
    return num1;
}
