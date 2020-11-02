#include<stdio.h>

void printArray(int arr[],int n)
{
    for (int i = 0; i < n;i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void sortArray(int arr[],int n)
{
    int cnt0=0, cnt1=0, cnt2=0;
    for (int i = 0; i < n;i++)
    {
        switch(arr[i])
        {
            case 0:
                cnt0++;
                break;
            case 1:
                cnt1++;
                break;
            case 2:
                cnt2++;
                break;
        }
    }
    int i = 0;
    while(cnt0>0)
    {
        arr[i++] = 0;
        cnt0--;
    }

    while(cnt1>0)
    {
        arr[i++] = 1;
        cnt1--;
    }

    while(cnt2>0)
    {
        arr[i++] = 2;
        cnt2--;
    }

    printArray(arr, n);
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

    sortArray(arr, n);
}