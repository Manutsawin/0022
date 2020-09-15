#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int st(int num);
int main()
{
    int n, loop1, loop2, star = 0;
    scanf("%d", &n);

    if (n % 2 == 1)
    {

        for (loop1 = 0; loop1 < n / 2 + 1; loop1++)
        {
            for (loop2 = 0; loop2 < n; loop2++)
            {
                if (loop2 == (n / 2) + star || loop2 == (n / 2) - star)
                {
                    printf("*");
                }
                else
                {
                    printf("-");
                }

            }
            printf("\n");
            star++;

        }
        star = st(star);
        for (loop1 = 0; loop1 < n / 2; loop1++)
        {
            for (loop2 = 0; loop2 < n; loop2++)
            {
                if (loop2 == (n / 2) + star || loop2 == (n / 2) - star)
                {
                    printf("*");
                }
                else
                {
                    printf("-");
                }

            }
            printf("\n");
            star--;

        }
    }
    else
    {
        for (loop1 = 0; loop1 < n / 2; loop1++)
        {
            for (loop2 = 0; loop2 < n - 1; loop2++)
            {
                if (loop2 == (n / 2) - 1 + star || loop2 == (n / 2) - 1 - star)
                {
                    printf("*");
                }
                else
                {
                    printf("-");
                }

            }
            printf("\n");
            star++;

        }
        star -= 1;
        for (loop1 = 0; loop1 < n / 2; loop1++)
        {
            for (loop2 = 0; loop2 < n - 1; loop2++)
            {
                if (loop2 == (n / 2) - 1 + star || loop2 == (n / 2) - 1 - star)
                {
                    printf("*");
                }
                else
                {
                    printf("-");
                }

            }
            printf("\n");
            star--;

        }
    }

    return 0;
}
int st(int num)
{
    num -= 2;
    return num;
}
