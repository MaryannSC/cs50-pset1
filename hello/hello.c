#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // get the user's name and greet them
    string name = get_string("What is your name? ");
    printf("hello, %s\n", name);
}