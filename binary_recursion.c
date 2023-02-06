#include <stdio.h>
int binary_search(int arr[10], int x, int low, int high)
{
    if(high >= low)
    {
            int mid = low + high / 2;
            if (arr[mid] == x)
            {
                    return mid;
            }
            else if (arr[mid] > x)
            {
                    return binary_search(arr,x,low,mid - 1);
            }
            else
            {
                    return binary_search(arr,x,mid + 1, high);
            }
    }
    return -1;
}
int main()
{
    int arr[10],n,i,x;
    printf("Enter size of an array : ");
    scanf("%d",&n);
    printf("Enter array elements :");
    for(i=0;i<n;i++)
    {
            scanf("%d",&arr[i]);
    }
    printf("Enter key :");
    scanf("%d",&x);
    int result = binary_search(arr,x,0,n-1);
    if (result != -1)
    {
        printf("Element is  found at index : %d", result+1);
    }
    return 0;
}


