#include <stdio.h>

int main() {
    int Leap_Year;
    scanf("%d",&Leap_Year);
    if (Leap_Year==1900)
    {
        printf("Not a Leap Year");
        }
    else if (Leap_Year%4==0){
        printf("Leap Year");
    }
    else {
        printf("Not a Leap Year");
    }
    return 0;
}