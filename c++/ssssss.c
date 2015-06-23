#include<stdio.h>
#include<math.h>
#include <float.h>

int main()
{
int t,n,i;
//int D = DECIMAL_DIG;

float r;
scanf("%d",&t);

while(t>0)
{   r=0;
    scanf("%d",&n);

    for(i=0;i<n;i++)
{

    r+=pow(-1,i)/(2*i+1);
}
t--;
printf("%.12G\n",r);
}
}
