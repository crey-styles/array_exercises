#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef char *string;

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./countbs input\n");
        return 1;
    }

    if (strlen(argv[1]) > 20)
    {
        printf("Input should not exceed 20\n");
        return 1;
    }

    int count = 0;
    // string input = get_string("Input: \n");
    printf("Total: ");

    for (int c = 0 , length = strlen(argv[1]) ; c < length ; ++c)
    {
        if (argv[c] == "b" || argv[c] == "B")
        {
            ++count;
        }
    }
    printf("%s\n", count);
    return count;

}
