#include <cs50.h>
#include <stdio.h>
void speed(int mass)
{
    int c = get_int("enter a speed: ");
    int school = mass * c;
    printf("%d\n",school);
}
int main()
{
    int mass = get_int("enter a mass: ");
    {
        speed(mass);
    }
}
