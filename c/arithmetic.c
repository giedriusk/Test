#include <stdio.h>

#define ADD "add"
#define SUBTRACT "subtract"
#define MULTIPLY "multiply"
#define DIVIDE "divide"

double arithmetic(double a, double b, char* operator) {
  double rez = 0;
  printf("Op: %s", operator);
  switch(*operator) {
    case ADD : {
      rez = a + b;
      break;
    }
    case SUBTRACT : {
      rez = a - b;
      break;
    }
    case MULTIPLY : {
      rez = a * b;
      break;
    }
    case DIVIDE : {
      rez = a / b;
      break;
    }
    default : { rez = 0; break; }
  }
  return rez;
}

int main() {
	printf("Rez: %f", arithmetic(1, 2, "add"));
	return 0;
}
