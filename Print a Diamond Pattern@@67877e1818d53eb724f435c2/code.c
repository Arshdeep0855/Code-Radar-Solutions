#include <stdio.h>
int main(){
    int a ;
    scanf("%d",&a);
    for(int i = 1;i <= a; i++)
    {
        for (int j = 1;j<=a-i ;j++)
        {
            printf(" ");
        }

            for (int m = 1; m<=(2*i-1);m++)
            {
                printf("*");
            }
        printf("\n");
    }
    for(int i=a-1; i>=1;i--){
        for(int j=a-i;j<=i;j++){
            printf(" ");
        }
        for (int m = 1; m<=(2*i-1);m++)
        {
                printf("*");
            }
            printf("\n");
    }
}