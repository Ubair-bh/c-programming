#include <stdio.h>
#include <time.h>

#define MAXLINE 100

int main()
{
    int c;
    int len = 0;
    int max = 0;
    int i;

    char word[MAXLINE];
    char longest[MAXLINE];

    clock_t start, end;

    printf("enter para\n");

    start = clock();

    while ((c = getchar()) != EOF)
    {
        if (c != ' ' && c != '\n' && c != '\t')
        {
            word[len] = c;
            len++;
        }
        else
        {
            // word is finished here
            if (len > max)
            {
                max = len;

                for (i = 0; i < len; i++)
                    longest[i] = word[i];

                longest[len] = '\0';
            }

            len = 0;
        }
    }

    // check the last word
    if (len > max)
    {
        max = len;

        for (i = 0; i < len; i++)
            longest[i] = word[i];

        longest[len] = '\0';
    }

    end = clock();

    printf("\nLongest word: %s\n", longest);
    printf("Length: %d\n", max);

    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Time taken: %f seconds\n", time_taken);

    return 0;
}