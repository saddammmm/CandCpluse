#include<stdio.h>
void swap(int *, int *);
int main()
{
    int s;
    scanf("%d",s);
    int a[s];
    int i;
    for(i=0;i<s;i++)
    {

        scanf("%d",&a[i]);
    }
    partition(a,0,s-1);
     for(i=0;i<s;i++)
    {

        printf("%d",a[i]);
    }
    return 0;

}

int partition (int arr[], int l, int h)
{
    int x = arr[h];    // pivot
    int i = (l - 1);  // Index of smaller element
int j;
    for (j = l; j <= h- 1; j++)
    {
        // If current element is smaller than or equal to pivot
        if (arr[j] <= x)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);  // Swap current element with index
        }
    }
    swap(&arr[i + 1], &arr[h]);
    return (i + 1);
}
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

