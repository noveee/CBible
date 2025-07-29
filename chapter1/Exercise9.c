#include <stdio.h> 

int main(){
    int c, blank;

    while ((c = getchar()) != EOF){
        
        while (c == 32){
            c = 0;
            blank = 1;
            
            if ((c = getchar()) != 32){
                int b = c;
                c = 32;
                putchar(c);
                c = b;
            }
        }

        putchar(c);
    }
}