#include <stdio.h>
#include <ctype.h>

int main(){
    char ch;


    scanf("%c", &ch);


    if (isalpha(ch)){
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch == 'E' || ch =='I' || ch =='o' || ch =='U'){
            printf("Vowel");
        }
        else {
            printf("Consonant");
            }
    }
    else if (isdigit(ch)){
        printf("Digit");
    }
    else {
        printf("Special character");
        }
    return 0;
}