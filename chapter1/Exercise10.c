#include <stdio.h>

int main(){
    int c, tab, backspace, backslash;

    while ((c = getchar()) != EOF){

        while (c == 9){
            c = 0;
                        
            if ((c = getchar()) != 9){
                putchar('\\');
                putchar('t');
            }
        }

        while (c == 8){
            c = 0;
                        
            if ((c = getchar()) != 8){
                putchar('\\');
                putchar('b');
            }
        }

        while (c == 92){
            c = 0;
                        
            if ((c = getchar()) != 92){
                putchar('\\');
                putchar('\\');
            }
        }

        putchar(c);
    }
}