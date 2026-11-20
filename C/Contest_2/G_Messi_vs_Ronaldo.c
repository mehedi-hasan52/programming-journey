#include <stdio.h>
int main()
{
    int a, b, x, y;
    scanf("%d %d %d %d", &a, &b, &x, &y);
    int messi = a * 2 + b;
    int rona = x * 2 + y;
    if (messi > rona)
    {
        printf("Messi\n");
    }
    else if (rona > messi)
    {
        printf("Ronaldo\n");
    }
    else
    {
        printf("Equal\n");
    }

    return 0;
}