//defining a function to convert fahrenheit to celsius
#include <stdio.h>
float fahr_to_celsius(float fahr){
  return (5.0/9.0 * (fahr - 32));
}
int main(void){
  for (float fahr = 0; fahr <= 300; fahr += 20)
    printf ("%6.2f %6.2f\n", fahr, fahr_to_celsius(fahr));
  return 0;
}
