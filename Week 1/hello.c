#include <stdio.h>

int main()
{
    char name[100]; // Assumes the name will be less than 100 characters

    printf("Please enter your name: ");
    fgets(name, sizeof(name), stdin); // Use fgets to safely read a string

    printf("Hello, %s", name); // Print the entered name

    return 0;
}