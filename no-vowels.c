#include <cs50.h>
#include <stdio.h>
#include <string.h>

string replace(string input)
{
    string output = "";
    for (int i = 0, n = strlen(input); i < n; i++)
    {
        switch (input[i])
        {
            case 'a':
                output = strcat(output, "6");
                break;
            case 'e':
                output = strcat(output, "3");
                break;
            case 'i':
                output = strcat(output, "1");
                break;
            case 'o':
                output = strcat(output, "0");
                break;
            case 'u':
                output = strcat(output, "u");
                break;
            default:
                output = strcat(output, &input[i]);
                break;
        }
    }
    return output;
}

int main(int argc, string argv[])
{

    if (argc != 2)
    {
        printf("Usage: ./no-vowels word\n");
        return 1;
    }

    string input = argv[1];
    string output = replace(input);

    printf("%s\n", output);
    return 0;
}
