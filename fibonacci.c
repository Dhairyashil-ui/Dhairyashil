#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int x,y,z;
    x = 0;
    y = 1;

    z = get_int("Enter number of elements: ");

    printf("%d\n",x);
    printf("%d\n",y);


    for (int i = 0; i < z; i++)
    {
        z = x + y;
        {

            printf("%d\n",z);

        }
        x = y;
        y = z;


    }
    return 0;
}
