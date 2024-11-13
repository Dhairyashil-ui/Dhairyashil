#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int n = get_int("Enter a number\n");
    int result =  n * n * n;
    printf("%d\n", result);

}
