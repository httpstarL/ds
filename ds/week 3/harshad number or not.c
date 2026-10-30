#include <stdio.h>
int main()
{
    int num, sum = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0)
    {
        sum += temp % 10;
        temp /= 10;
    }
    if (sum != 0 && num % sum == 0)
        printf("%d is a Harshad number.\n", num);
    else
        printf("%d is NOT a Harshad number.\n", num);
    return 0;
}