#include <stdio.h>
int main()
{
    int i = 1, n, x, sum = 0;
    float avg;
    printf("Enter how many numbers\n");
    scanf("%d", &n);
    printf("Enter %d numbers\n", n);
    do
    {
        scanf("%d", &x);
        sum = sum + x;
        i++;
    } while (i <= n);
    avg = (float)sum / n;
    printf("Average=%.1f\n", avg);
    return 0;
}