#include<stdio.h>
int main()
{
	int arr[50],n,c,d,swap;
	printf("Enter number of elements in an array : ");
        scanf("%d",&n);
	printf("Enter elements of an array : ");
	for(c=0;c<n;c++)
	{
		scanf("%d",&arr[c]);
	}
	for(c=0;c<n-1;c++)
	{
		for(d=0;d<n-c-1;d++)
		{
			if(arr[d] > arr[d+1])
			{
				swap = arr[d];
				arr[d] = arr[d+1];
				arr[d+1] = swap;
			}
		}
	}
	printf("Sorted list in ascending order : ");
	for(c=0;c<n;c++)
	{
		printf("%d\n",arr[c]);
	}
	return 0;
}

