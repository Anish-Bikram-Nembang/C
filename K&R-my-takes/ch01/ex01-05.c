//Print temp conversion table in reverse order, from 300 to 0
#include <stdio.h>

int main(void) {
    int upper, lower, step;
    float fahr, celsius;
    lower = 0;
    fahr = upper = 300;
    step = 20;
    printf("Fahrenheit Celsius\n");
    while (fahr >= lower) {
        celsius = 5.0/9.0 * (fahr - 32);
        printf("%10.0f%8.1f\n", fahr, celsius);
        fahr -= step;
    }
    return 0;
}
