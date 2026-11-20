#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int c, d;
    scanf("%d%d", &c, &d);
    int dominater = a + c;
    int everule = b + d;
    if (dominater > everule)
    {
        printf("Dominater\n");
    }
    else
    {
        printf("Everule\n");
    }

    return 0;
}