#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int x, y;
    x = get_int("enter x: ");
    y = get_int("enter y: ");
    {
        int z = x*y;
        {
            printf(square is: "%d\n",z);
        }
    }

}
