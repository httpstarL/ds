#include <stdio.h>
void swapByValue(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Inside swapByValue: a = %d, b = %d\n", a, b);
}
int main()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    swapByValue(x, y);
    printf("After swapByValue : x = %d, y = %d\n", x, y);
    return 0;
}