#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i = n;i;i--){
        for (int j = i;j;j--)
        {
            printf("*");
        }
        printf("\n");
    }

}