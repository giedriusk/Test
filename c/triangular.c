#include <stdio.h>

int sumTriangularNumbers(int n) {
	int rez = 0;

	// canot be negative
	if (n < 0) return rez;

	// calculates sum of triangular numbers
	int i;
	for (i = 1; i <= n; i++) {
		// calculate triangular number
		rez += (i * (i + 1)) / 2;
		printf("Sum %d: %d\n", i, rez);
	}

	return rez;
}

int main() {
	int d = 6;
	printf("Triangular kata: %d\n", sumTriangularNumbers(d));
	return 0;
}
