#include<iostream>
using namespace std;

// Maximum number of digits in output
#define MAX 500000000
void factorial(int n);

int multiply(int x, int res[], int res_size);

void factorial(int n)
{
    int res[MAX];


    res[0] = 1;
    int res_size = 1;


    for (int x=2; x<=n; x++)
        res_size = multiply(x, res, res_size);


    cout<<res_size;
}


int multiply(int x, int res[], int res_size)
{
    int carry = 0;


    for (int i=0; i<res_size; i++)
    {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry  = prod/10;
    }


    while (carry)
    {
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}


int main()
{
    int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<t;i++)
    {

        factorial(a[i]);
    }

    return 0;
}
