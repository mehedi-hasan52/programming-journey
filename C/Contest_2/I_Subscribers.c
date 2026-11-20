#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n <= 999)
    {
        printf("%d", n);
    }
    else if (n > 999 && n <= 9999)
    {
        n = (n / 10) * 10;
        printf("%d", n);
    }
    else if (n >= 10000 && n <= 99999)
    {
        n = (n / 100) * 100;
        printf("%d", n);
    }
    else if (n >= 100000 && n <= 999999)
    {
        n = (n / 1000) * 1000;
        printf("%d", n);
    }
    else if (n >= 1000000 && n <= 9999999)
    {
        n = (n / 10000) * 10000;
        printf("%d", n);
    }
    else if (n >= 10000000 && n <= 99999999)
    {
        n = (n / 100000) * 100000;
        printf("%d", n);
    }
    else if (n >= 100000000 && n <= 999999999)
    {
        n = (n / 1000000) * 1000000;
        printf("%d", n);
    }

    return 0;
}