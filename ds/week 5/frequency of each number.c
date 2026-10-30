#include <stdio.h>
int main()
{
    int n, i, j, count;
    int arr[100], visited[100] = {0};
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Frequency of elements:\n");
    for (i = 0; i < n; i++)
    {
        if (visited[i] == 1)
            continue;
        count = 1;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                visited[j] = 1;
            }
        }
        printf("%d occurs %d times\n", arr[i], count);
    }
    return 0;
}