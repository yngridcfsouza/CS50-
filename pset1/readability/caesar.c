# include <cs50.h>
# include <ctype.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int main(int argc, string argv[])
// Check if the command line is valid
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else if (atoi(argv[1]) >= (int)0)
    {
        int n = strlen(argv[1]);
        int a;
        // For a valid command line, check if the key contais only nummbers
        for (int i = 0; i < n; i++)
        {
            if (((char)argv[1][i] >= '0' && (char)argv[1][i] <= '9'))
            {
                a = 1;
            }
            else
            {
                a = 0;
            }
        }
        // If the key contais only numbers get the plaintext
        if (a == 1)
        {
            int k = atoi(argv[1]);
            string t = get_string("plaintext: ");
            int l = strlen(t);
            // Start to cipher the text
            printf("ciphertext: ");
            for (int i = 0; i < l; i++)
                if (t[i] >= 'a' && t[i] <= 'z')
                {
                    int p = (int)t[i] - 97;
                    int s = (p + k) % 26;
                    char c = (char)s + 97;
                    printf("%c", c);
                }
                else if (t[i] >= 'A' && t[i] <= 'Z')
                {
                    int p = (int)t[i] - 65;
                    int s = (p + k) % 26;
                    char c = (char)s + 65;
                    printf("%c", c);
                }
                else
                {
                    printf("%c", t[i]);
                }
            printf("\n");
            return 0;
        }
        // If the key is not only numbers return 1 to the main function
        else
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    // If the command line is not valid, return 1 to the main function
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}