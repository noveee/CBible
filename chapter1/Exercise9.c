#include <stdio.h> 

int main(){
    int c, blanks;

    while ((c = getchar()) != EOF){
        blanks = 0;
        while (c == 32){
            ++blanks;
            printf("%d\n", blanks);
            c = NULL;
        }

        if (blanks != 0){
            c = 32;
        }
        putchar(c);
    }
}