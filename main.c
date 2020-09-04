//Author: Saeed Alyami, ssa5468@psu,edu
//Collaborator: Lucas Yancey, lcy5032@psu.edu
//collaborator: Vincent Barnes, vjb5182@psu.edu

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *temp = readline("Enter temperature in celsius: ");
  double celsius;
  celsius = atof(temp);
  double fahrenheit;
  fahrenheit = celsius* 1.8+32;
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n", celsius, fahrenheit);
  return 0;
}