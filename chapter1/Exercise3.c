#include <stdio.h> 

int main(){
    float fahrenheit, celsius;
    float lower = 0, upper = 300, step = 20;

    fahrenheit = lower;
    
    printf("Fahrenheit to Celsius Conversion Table\n\n");
    printf("Fahrenheit\tCelsius\n");

    while (fahrenheit <= upper) {
        celsius = (5.0/9.0) * (fahrenheit - 32.0);
        printf("%3.0f\t\t%6.1f\n", fahrenheit, celsius);
        fahrenheit = fahrenheit + step;
    }
}