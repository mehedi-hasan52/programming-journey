#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int pair = a + b + (a * b);
    if (pair == 111)
    {
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

    return 0;
}