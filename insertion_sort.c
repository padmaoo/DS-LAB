#include<stdio.h>
int main()
{
	int arr[100],n,c,d,t,flag=0;
	printf("Enter number of elemnts in an array :");
	scanf("%d",&n);
	printf("Enter elements of an array :");
	for(c=0;c<n;c++)
	{
		scanf("%d",&arr[c]);
	}
	for(c=1;c<=n-1;c++)
	{
		t = arr[c];
		for(d=c-1;d<=n-1;d--)
	{
		if(arr[d] > t)
		{
			arr[d+1] = arr[d];
		        flag = 1;
		}
		else
		  break;	
	}
	if(flag)
		arr[d+1] = t;
	}
	printf("Sorted list after insertion :");
	for(c=0;c<n;c++)
	{
		printf("%d\n",arr[c]);
	}
	return 0;
}



