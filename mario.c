#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height = 0;

    //Asks the user to provide a number between 1 nad 8 inclusive
    do
    {
        height = get_int("Height: ");
    }
    while (height > 8 || height < 1);

    for (int i = 0; i <= height - 1; i++)
    {
        for (int j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }



        for (int k = 0; k <= i; k++)
        {
            {
                printf("#");
            }

        }

        printf("  ");

        for (int k = 0; k <= i; k++)
        {
            {
                printf("#");
            }

        }


        printf("\n");

    }

}
