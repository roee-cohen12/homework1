#include <stdio.h>
#include <limits.h>

int main() {
    int num, reversed_num = 0;
    int flag_if_negative = 0;

    if (scanf("%d", &num) == 0 || num > INT_MAX || num < INT_MIN) {
        printf("Error in input!\n");
        return 0;
    }

    if (num < 0) { //if the num is negative make it positive for the while loop
        num *= -1;
        flag_if_negative = 1;
    }

    while (num > 0) {
        reversed_num *= 10; //match the num length
        reversed_num += num % 10; //add the last digit
        num /= 10; //reduce the initial number
    }

    if (flag_if_negative) reversed_num *= -1;//the number was negative
    printf("%d\n", reversed_num);

    return 0;
}
