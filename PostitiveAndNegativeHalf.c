// Given an array A[] consisting 0s, 1s and 2s. The task is to write a function that sorts the given array.
//  The functions should put all 0s first, then all 1s and all 2s in last.
#include <stdio.h>

void displayArray(int arr[],int n)
{
    printf("\nThe resultant array is:\t");
    for (int i = 0; i <= n;i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
void arrangeArray(int arr[],int left,int right)
{
    while(left<=right)
    {
        if(arr[left]>0 && arr[right]<0)
        {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
        else if(arr[left]<0 && arr[right]<0)
        {
            left++;
        }
        else if(arr[right]>0 && arr[left]>0)
        {
            right--;
        }
        else{
            left++;
            right--;
        }
    }
}
int main()
{
    int n, arr[10];
    printf("Enter the number of array elements:");
    scanf("%d", &n);
    printf("Enter the array elements:");
    for (int i = 0; i < n;i++)
    {
        scanf("%d", &arr[i]);
    }
    arrangeArray(arr, 0, n - 1);
    displayArray(arr, n - 1);
}