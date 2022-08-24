# include <cs50.h>
# include <ctype.h>
# include <stdio.h>
# include <string.h>
# include <math.h>


int main(void)

{
    // Get the text to read
    int l, n, i, p, w;
    float letword, phrword, index;
    string t = get_string("Insert here your text: ");
    n = strlen(t);
    // Count how many letters, words and phrases it has
    for (i = 0, l = 0, p = 0, w = 1; i < n; i++)
    {
        if ((t[i] >= 'a' && t[i] <= 'z') || (t[i] >= 'A' && t[i] <= 'Z'))
        {
            l++;
        }
        if ((t[i]) == '.' || (t[i]) == '!' || (t[i]) == '?')
        {
            p++;
        }
        if ((t[i]) == ' ')
        {
            w++;
        }
    }
    // calculate the Coleman-Liau index
    letword = (l * 100) / (float) w;
    phrword = (p * 100) / (float) w;
    index = 0.0588 * letword - 0.296 * phrword - 15.8;
    int g = lround(index);
    // Print the Readability Grade according the Coleman-Liau index
    if (g <= 1)
    {
        printf("Before Grade 1\n");
    }
    else if (g > 1 && g < 16)
    {
        printf("Grade %i\n", g);
    }
    else
    {
        printf("Grade 16+\n");
    }
}