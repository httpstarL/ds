#include <stdio.h>
int main()
{
    int num, i;
    long long fact = 1;
    printf("Enter a number to find its Factorial: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Factorial of negative number not possible\n");
    }
    else
    {
        for (i = 1; i <= num; i++)
        {
            fact = fact * i;
        }
        printf("The Factorial of %d is %lld.\n", num, fact);
    }
    return 0;
}