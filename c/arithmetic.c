#include <stdio.h>
#include <string.h>

double arithmetic(double a, double b, char* operator) {
  double rez = 0;

  if (strcmp(operator, "add") == 0) rez = a + b;
  if (strcmp(operator, "multiply") == 0) rez = a * b;
  if (strcmp(operator, "subtract") == 0) rez = a - b;
  if (strcmp(operator, "divide") == 0) rez = a / b;

  return rez;
}

int main() {
	printf("Rez: %f\n", arithmetic(1, 2, "add"));
	return 0;
}
