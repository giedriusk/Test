#include <stdio.h>

/**
 * Calculates the sum of the digits for given number
 * number - number to give
 * sum - the sum that is being calculated
 */
int sumNumber(int number, int sum) {
    // base criteria
    if (number == 0) return sum;

    // progression
    sum += number % 10;
    printf(">> number: %d sum: %d \r\n", number, sum);
    return sumNumber(number / 10, sum);
}

int main() {
    int number = 1234567;
    printf("Result: %d\r\n", sumNumber(number, 0));
    return 0;
}