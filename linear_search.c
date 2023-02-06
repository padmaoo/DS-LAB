#include<stdio.h>
int main()
{
	int arr[100],search,i,n;
	printf("Enter numbers of elements in array : ");
	scanf("%d",&n);
	printf("Enter elements of array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter an element to search : ");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(arr[i] == search)
		{
			printf("%d is present at location %d.",search,i+1);
			break;
		}
	}
	if(i == n)
	{
		printf("%d isn't present in the array.",search);
	}
	return 0;
}

