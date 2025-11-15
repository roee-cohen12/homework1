#include <stdio.h>

int main() {

    //variable for the code, combined sets the term for legal number
    int max_length, num_of_different_digits, max_appearance_of_digit;
    char digit;
    int count_digits = 0;//checks num of digits is less than max_length

    int zero = 0, one = 0, two = 0, three = 0, four = 0, five = 0, six = 0,
    seven = 0, eight = 0, nine = 0;//count for each digit to check third term

    //flags to check the second term
    int zero_flag = 0, one_flag = 0, two_flag = 0, three_flag = 0,
    four_flag = 0, five_flag = 0, six_flag = 0,
    seven_flag = 0, eight_flag = 0, nine_flag = 0; //sets all flag to false

    printf("Please enter condition numbers:\n");
    //assume input is valid
    scanf("%d %d %d", &max_length, &num_of_different_digits,
        &max_appearance_of_digit);

    if (num_of_different_digits < 1 || num_of_different_digits > 10) {
        printf("Number of unique digits must be between 1 to 10\n");
        return 0;//second variable must be between(0-9) as the number of
                                                            //possible digits
    }

    printf("Please enter test number:\n");//gets input test

    while (scanf(" %c", &digit) != EOF || count_digits == max_length - 1)
        {

        switch (digit) { //each digit processed separately to store information
            case '0': zero++; zero_flag = 1;
                if (zero > max_appearance_of_digit) {
                    printf("The number given does not meet all the"
                           " conditions\n");
                    return 0;
                }
                break;
            case '1': one++; one_flag = 1;
                if (one > max_appearance_of_digit) {
                    printf("The number given does not meet all the"
                           " conditions\n");
                    return 0;
                }
                break;
            case '2': two++; two_flag = 1;
                if (two > max_appearance_of_digit) {
                    printf("The number given does not meet all the"
                           " conditions\n");
                    return 0;
                }
                break;
            case '3': three++; three_flag = 1;
                if (three > max_appearance_of_digit) {
                    printf("The number given does not meet all the"
                           " conditions\n");
                    return 0;
                }
                break;
            case '4': four++; four_flag = 1;
                if (four > max_appearance_of_digit) {
                    printf("The number given does not meet all the"
                           " conditions\n");
                    return 0;
                }
                break;
            case '5': five++; five_flag = 1;
                if (five > max_appearance_of_digit) {
                    printf("The number given does not meet all the"
                           " conditions\n");
                    return 0;
                }
                break;
            case '6': six++; six_flag = 1;
                if (six > max_appearance_of_digit) {
                    printf("The number given does not meet all the"
                           " conditions\n");
                    return 0;
                }
                break;
            case '7': seven++; seven_flag = 1;
                if (seven > max_appearance_of_digit) {
                    printf("The number given does not meet all the"
                           " conditions\n");
                    return 0;
                }
                break;
            case '8': eight++; eight_flag = 1;
                if (eight > max_appearance_of_digit) {
                    printf("The number given does not meet all the"
                           " conditions\n");
                    return 0;
                }
                break;
            case '9': nine++; nine_flag = 1;
                if (nine > max_appearance_of_digit) {
                    printf("The number given does not meet all the"
                           " conditions\n");
                    return 0;
                }
                break;
            default: break;
        }
        //checks the second term - number of different digits
        if (zero_flag + one_flag + two_flag + three_flag + four_flag + five_flag
            + six_flag + seven_flag + eight_flag + nine_flag
            > num_of_different_digits) {
            printf("The number given does not meet all the conditions\n");
            return 0;
        }
        count_digits++; //count numbers to compare to max length
    }
    printf("The number given meets all the conditions\n");

    return 0;
}
