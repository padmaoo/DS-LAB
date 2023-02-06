#include<stdio.h>
int binary_search(int a[5],int n, int key)
{
    int i,low=0,high=n-1,mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key < a[mid])
        {
                high = mid - 1;
        }
        else if (key > a[mid])
        {
                low = mid + 1;
        }
        else
        {
                return mid;
        }
    }
        return -1;
}
int main()
{
  int a[5],n,i,key,pos;
  printf("Enter size :");
  scanf("%d",&n);
  printf("\n Enter array elements :");
  for(i=0;i<n;i++)
  {
          scanf("%d",&a[i]);
  }
  printf("Enter key :");
  scanf("%d",&key);
  pos = binary_search(a,n,key);
  if (pos != -1)
  {
	  printf("Element found at %d position.",pos+1);
  }
}
