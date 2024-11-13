#include <stdio.h>
#include <cs50.h>
int main(void)
{
    int n = get_int("Enter number: ");
    if (n % 2 == 0)
    {
        printf("even number\n");
    }
    else
    {
        printf("not a even number\n");
    }

}

