#include <cs50.h>
#include <stdio.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
int main(void)
{
    int n = get_int("Enter a integer: ");
    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers\n");
    }
    else


    {
        printf("Factorial of %d is %d\n", n, factorial(n));
    }
}
