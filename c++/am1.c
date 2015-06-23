#include<stdio.h>
#include<conio.h>
void mergeSort();
void merge();
int man()
 {
	        int arr[]={1,3,4,5,6,7,2,0};
	        int s,i,m;
	        printf("Enter value of s");
	        scanf("%d",&s);
		    mergeSort(arr,0,7);
		    
		 int sum=0;
			for(i=0;i<8;i++ )
			{
				sum=sum+arr[i];
				if(sum==s)
			{m=i;
				break;}	
				else 
				continue;
				}
				for(i=0;i<=m;i++)
				{
					printf("%d",arr[i]);
					}
		}


 

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
 
   
    int L[n1], R[n2];
 
    
    for(i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for(j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
 
    
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    /* Copy the remaining elements of L[], if there are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2; 
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}
 
