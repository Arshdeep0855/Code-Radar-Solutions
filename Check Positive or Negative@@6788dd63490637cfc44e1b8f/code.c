#include <stdio.h>
int main() {
    int A;
    scanf("%d",&A);
    if (A > 0)
    {
        printf("Positive");
    }
    else if (A == 0 ) 
    {
        printf("Zero");
    }
    else
    {
        printf("Negative");
    }
    return 0;
}