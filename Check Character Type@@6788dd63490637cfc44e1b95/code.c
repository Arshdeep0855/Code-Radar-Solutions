#include <stdio.h>
#include <ctype.h>

int main(){
    char ch;
    scanf("%c", &ch);
    if (isalpha(ch)){
        if (a=="a" || a=="e" || a=='i' || a=="o" || a=="u" ||a=="A" || a=="E" || a=='I' || a=="O" || a=="U"){
            printf("Vowel");
        }
            else {
                printf("Consonant");
            }
    }
    return 0;
}