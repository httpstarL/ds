#include <stdio.h>
int main()
{
    int n, i;
    int arr[100];
    int smallest, secondSmallest;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    if (arr[0] < arr[1])
    {
        smallest = arr[0];
        secondSmallest = arr[1];
    }
    else
    {
        smallest = arr[1];
        secondSmallest = arr[0];
    }
    for (i = 2; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < secondSmallest && arr[i] != smallest)
        {
            secondSmallest = arr[i];
        }
    }
    printf("Second smallest element = %d\n", secondSmallest);
    return 0;
}