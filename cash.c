#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float change;

    do
    {
        change= get_float("Change owed: ");
    }
    while (change < 0);

   change= change*100;
   change= round(change);
    int i = 0;



    while(change > 0)
    {
        if (change >= 25)
        {
            change -= 25;
            i++;
        }
        else if (change >= 10)
        {
             change -= 10;
             i++;
         }
        else if (change >= 5)
        {
            change -= 5;
            i++;
        }
        else if (change >= 1)
        {
            change -= 1;
            i++;
        }
    }
    printf("%i\n", i);

}