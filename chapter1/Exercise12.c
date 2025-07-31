#include <stdio.h> 
#define IN  1
#define OUT 0

int main(){
    int c, nw, state;

    state = OUT;
    nw = 0;
    
    while ((c = getchar()) != EOF){
        
        if (c == ' ' || c == '\n' || c == '\t'){
            state = OUT;
            putchar('\n');
        }

        else if (state == OUT){
            state = IN;
            ++nw;
        }
        
        if (nw >= 1 && state == IN){
            putchar(c);
            
        }
    }
}