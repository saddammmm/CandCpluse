#include<stdio.h>
int hcf(int,int);
void main()
{

    int n,m;

    scanf("%d%d",&n,&m);


    int s= hcf(n,m);
    printf("%d",s);
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
