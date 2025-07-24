#include <stdio.h> 

int main(){
    int count, blanks, tabs, newlines;
    count = blanks = tabs = newlines = 0;

    while ((count = getchar()) != EOF){
        if (count == 32){
            ++blanks;
        }else if (count == 9){
            ++tabs;
        }else if (count == 10){
            ++newlines;
        }
    }
    printf("blanks: %d\ntabs: %d\nnewlines: %d\n", blanks, tabs, newlines);
}