#include <stdio.h>
void main()
{
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
            sum += i;
    }
    if(sum > num)
        printf("%d is an Abundant number.\n", num);
    else
        printf("%d is NOT an Abundant number.\n", num);
    return 0;
}
