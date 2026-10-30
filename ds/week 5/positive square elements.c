#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, arr[100], sum = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            int root = (int)sqrt(arr[i]);
            if (root * root == arr[i])
            {
                sum += arr[i];
            }
        }
    }
    printf("Sum of positive square elements = %d\n", sum);
    return 0;
}