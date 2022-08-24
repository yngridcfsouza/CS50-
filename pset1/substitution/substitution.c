# include <cs50.h>
# include <ctype.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int main(int argc, string argv[])
{
    // Check if the command line is valid
    if (argc != 2 || argc == 1)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    // Check if the key contains 26 characters
    else if (strlen(argv[1]) != 26)
    {
        printf("The key must contain only 26 characters.\n");
        return 1;
    }
    // Check if the key contains only letters
    else if ((strlen(argv[1]) == 26) && (argc == 2))
    {
        int n = strlen(argv[1]);
        int a = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (toupper(argv[1][i]) == toupper(argv[1][j]))
                {
                    printf("Usage: ./ substitution key\n");
                    return 1;
                }
            }
            if ((toupper(argv[1][i]) >= 'A') && (toupper(argv[1][i]) <= 'Z'))
            {
                a++;
            }
            else
            {
                a--;
            }
        }
        if (a == 26)
        {
            string t = get_string("plaintext: ");
            int l = strlen(t);
            // Start to cipher the text
            printf("ciphertext: ");
            for (int i = 0; i < l; i++)
                if (t[i] >= 'a' && t[i] <= 'z')
                {
                    int p = t[i] - 97;
                    char c = tolower(argv[1][p]);
                    printf("%c", c);
                }
                else if (t[i] >= 'A' && t[i] <= 'Z')
                {
                    int p = t[i] - 65;
                    char c = toupper(argv[1][p]);
                    printf("%c", c);
                }
                else
                {
                    printf("%c", t[i]);
                }
            printf("\n");
            return 0;
        }
        else
        {
            printf("The key must contain only alphafabet letters.\n");
            return 1;
        }
    }
    else
    {
        printf("The key must contain only 26 alphabet letters.\n");
        return 1;
    }
}