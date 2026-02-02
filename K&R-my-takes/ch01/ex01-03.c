//modify the example to print heading above the conversion table
#include <stdio.h>

int main(void) {
    int lower, upper, step;
    float fahr, celsius;
    upper = 300;
    lower = 0;
    fahr = lower;
    step = 20;
    printf("Fahrenheit  Celsius\n");
    while (fahr <= upper) {
        celsius = 5.0/9.0 * (fahr - 32);
        printf("%10.0f%9.1f\n", fahr, celsius);
        fahr += step;
    }
    return 0;
}

