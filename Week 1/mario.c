#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    for (int i = 0; i < n; i++)
    {
        // Print spaces before the first hashes
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }

        // Print the first set of hashes
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }

        // Print the gap between the sets of hashes
        printf("  ");

        // Print the second set of hashes
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
