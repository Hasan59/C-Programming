#include <stdio.h>
int main()
{
    int i, j;
    // scanf("%d", &n);
    for (i = 1; i <= 15; i++)
    {
        for (j = 1; j <= 15; j++)
        {
            if ((i + j) <= 15)

                printf(" ");

            else

                printf("*");
        }
        printf("\n");
    }
}