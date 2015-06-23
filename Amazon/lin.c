#include<stdio.h>
#include<conio.h>

void activities(int s[], int f[], int n)
{
	int i, j;
	printf ("Selected Activities are:\n");
	i = 1;
	printf("A%d ", i);
	for (j = 1; j < n; j++)
	{
		if (s[j] > f[i])
		{
			printf ("A%d ", j+1);
			i = j;
		}
	}
}

void main()
{
	int s[] =  {5,3,4,12,1};
	int f[] =  {8,7,10,15,7};
	int n = sizeof(s)/sizeof(s[0]);

	activities(s, f, n);
	getchar();
	getch();
}
