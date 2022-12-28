#include <stdio.h>
#include <math.h>
#include "my_functions.h"

#define MAX_ITERATIONS 1001 
#define TOLERANCE 1e-6 

int main() {
  printf("Enter the starting value: ");
  double x0;
  scanf("%lf", &x0); 
  double x = x0;
  int i;

  for (i = 0; i < MAX_ITERATIONS; i++) {
    double fx = f(x);
    if (fabs(fx) < TOLERANCE) {
     
      break;
    }
    double dx = df(x);
    if (fabs(dx) < TOLERANCE) {
      printf("Derivative too small\n");
      return 1;
    }
    double x_prev = x; 
    x = x - fx/dx; 
    if (fabs(x - x_prev) < TOLERANCE) {
      break;
    }
  }

  if (i == MAX_ITERATIONS) {
    printf("Root not found\n");
    return 1;
  }

  printf("Root: %f\n", x);
  printf("Iterations required: %d\n", i+1);
  return 0;
}
