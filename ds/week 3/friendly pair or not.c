#include <stdio.h>
int main()
{
    int num1, num2, i, sum1 = 0, sum2 = 0;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    for (i = 1; i <= num1 / 2; i++)
    {
        if (num1 % i == 0)
            sum1 += i;
    }
    for (i = 1; i <= num2 / 2; i++)
    {
        if (num2 % i == 0)
            sum2 += i;
    }
    if (sum1 == num2 && sum2 == num1)
        printf("%d and %d are Friendly (Amicable) Pair.\n", num1, num2);
    else
        printf("%d and %d are NOT Friendly Pair.\n", num1, num2);
    return 0;
}