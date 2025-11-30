#include <stdio.h>

int main() {
    int num, temp, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (num > 0) {
        rem = num % 10;            // get last digit
        sum = sum + (rem * rem * rem);  // cube and add
        num = num / 10;            // remove last digit
    }

    if (temp == sum) {
        printf("%d is an Armstrong number.\n", temp);
    } else {
        printf("%d is NOT an Armstrong number.\n", temp);
    }

    return 0;
}
