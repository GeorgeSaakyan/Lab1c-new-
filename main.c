//Author: George Saakyan gxs5416@psu.edu
//Collaborator: Christian Torres ckt5298@psu.edu
//Collaborator: Manan Patel mxp5787@psu.edu

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *celsius = readline("Enter temperature in celsius: ");
  double celsiusb = atof(celsius);
  double fahrenheit = (celsiusb * 9.0/5.0) + 32;
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n", celsiusb, fahrenheit);
  return 0;
}