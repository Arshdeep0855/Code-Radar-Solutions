#include <stdio.h>

int main()
{
    char a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        for (char ch = 'A'; ch < 'A' + i; ch++)
        {
            printf("%c ", ch);
        }
        printf("\n");
    }
    return 0;
}
