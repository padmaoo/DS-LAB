#include<stdio.h>
void main()
{
	int arr[50],n,c,d,pos,t;
	printf("Enter number of elements in an array :");
	scanf("%d",&n);
	printf("Enter elemnts of an array :");
	for(c=0;c<n;c++)
	{
		scanf("%d",&arr[c]);
	}
	for(c=0;c<(n-1);c++)
	{
		pos = c;
		for(d=c+1;d<n;d++)
		{
			if(arr[pos] > arr[d])
			{
				pos =  d;
			}
		}
		if(pos != c)
		{
			t = arr[c];
			arr[c] = arr[pos];
			arr[pos] = t;
		}
	}
	printf("Sorted list in ascending order :");
	for(c=0;c<n;c++)
	{
		printf("%d\n",arr[c]);
	}
}


