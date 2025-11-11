//Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main() {
    int n, first, last, temp, count = 0, pow = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    last = n % 10;  // get last digit

    // find first digit and number of digits
    while (temp >= 10) {
        temp = temp / 10;
        pow = pow * 10;
        count++;
    }
    first = temp;

    // swap first and last digits
    n = n % pow;           // remove first digit
    n = n / 10;            // remove last digit
    n = last * pow + n * 10 + first;

    printf("After swapping: %d\n", n);

    return 0;
}
