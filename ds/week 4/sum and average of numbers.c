#include <stdio.h>
int main()
{
    int N, i;
    int arr[100];
    int sum = 0;
    float avg;
    printf("Enter size of array (N): ");
    scanf("%d", &N);
    printf("Enter %d elements:\n", N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avg = (float)sum / N;
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);
    return 0;
}