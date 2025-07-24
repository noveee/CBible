#include <stdio.h> 

int main(){
    int c;

    while ((c = getchar()) != EOF){
        if (c == 32){
            printf("\nBlank\n");
        }
        
        putchar(c);
    }
}