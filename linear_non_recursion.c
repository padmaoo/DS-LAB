#include<stdio.h>
int non_recursion(int arr[20],int n,int key);
int main()
{
        int n,arr[20],i,key,pos;
        printf("Enter no.of elements in an array : ");
        scanf("%d",&n);
        printf("Enter elements of the array :");
        for (i = 0; i < n; i++)
        {
                scanf("%d", &arr[i]);

        }
        printf("Element to be searched :");
        scanf("%d",&key);
        pos = non_recursion(arr,n,key);
        if(pos == -1)
        {
                printf("Element not found");
        }
        else
        {
                printf("%d element found at %d position.",key,pos+1);
        }
}
int non_recursion(int arr[20],int n,int key)
{
        int i;
        for(i=0;i<n;i++)
        {
                if(key == arr[i])
                {
                        return i;
                }
        }
        return -1;
}

