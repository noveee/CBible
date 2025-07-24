#include <stdio.h> 

int main(){
    int count, newline;
    newline = 0;

    while ((count = getchar()) != EOF){
        if (count == '\n'){
            ++newline;
        }
    }
    printf("%d\n", newline);
}