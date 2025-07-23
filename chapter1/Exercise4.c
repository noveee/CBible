#include <stdio.h> 

int main(){
    float fahrenheit, celsius;
    float lower = 0, upper = 100, step = 5;

    celsius = lower;
    
    printf("Celsius to Fahrenheit Conversion Table\n\n");
    printf("Celsius\t\tFahrenheit\n");

    while (celsius <= upper) {
        fahrenheit = (celsius * 9.0/5.0) + 32;
        printf("%6.1f\t\t%3.1f\n", celsius, fahrenheit);
        celsius = celsius + step;
    }
}