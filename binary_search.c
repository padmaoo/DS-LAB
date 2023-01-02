#include<stdio.h>
int main()
{
	int i,first,last,middle,n,search,arr[100];
	printf("Enter number of elements in an array : ");
	scanf("%d",&n);
	printf("Enter elements of array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter an element to search : ");
	scanf("%d",&search);
	first = 0;
	last = n - 1;
	middle = (first + last)/2;
	while(first <= last)
	{
		if(arr[middle] < search)
		{
			first = middle + 1;
		}
		else if(arr[middle] == search)
		{
			printf("%d found at location at %d.",search,middle+1);
			break;
		}
		else
		{
			last = middle - 1;
		}
		middle = (first + last)/2;
	}
	if(first > last)
	{
		printf("%d element isn't present in the array.",search);
	}
	return 0;
}	

