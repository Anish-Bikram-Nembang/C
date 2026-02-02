//Print the corresponding Celsius to Fahrenheit table
#include <stdio.h>

int main(void) {
    int lower, upper, step;
    float celsius, fahr;
    celsius = lower = 0;
    upper = 300; 
    step = 20;
    printf("Celsius Fahreheit\n");
    while (celsius <= upper) {
        fahr = ((9.0 / 5.0) * celsius) + 32;
        printf("%7.0f%10.1f\n", celsius, fahr);
        celsius += step;
    }
    return 0;
}
