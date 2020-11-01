#include<stdio.h>

int partition(int arr[],int low, int high)
{
    int pivot = arr[high], pivotloc = low;
    for (int i = low; i <= high;i++)
    {
        if(arr[i]<pivot)
        {
            int temp = arr[i];
            arr[i] = arr[pivotloc];
            arr[pivotloc] = temp;
            pivotloc++;
        }
    }

    int temp = arr[high];
    arr[high] = arr[pivotloc];
    arr[pivotloc] = temp;

    return pivotloc;
}

int kthSmallestElement(int arr[],int low,int high,int k)
{
    int part = partition(arr, low, high);
    if(part==k)
        return arr[part];
    else if (part<k)
        return kthSmallestElement(arr, part + 1, high, k);
    else
        return kthSmallestElement(arr, low, part - 1, k);
}
int main()
{
    int n, arr[10], k;
    printf("Enter the number of array elements:");
    scanf("%d", &n);
    printf("enter the array elements:");
    for (int i = 0; i < n;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter k:");
    scanf("%d", &k);
    int result = kthSmallestElement(arr, 0, n - 1, k-1);
    printf("The kth smallest element is:%d", result);
}