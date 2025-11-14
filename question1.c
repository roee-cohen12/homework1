
#include <stdio.h>
#define ERROR_TEMP 15

int main() {
    double temperature, max_temp, min_temp; //max and min sets on first input
    double avg_overall_temp = 0; //avg_week_temp = 0; //real values
    double sum_temp = 0, sum_temp_weekly = 0;//temp_weekly resets every 7 inputs
    int count_temp = 0, count_weeks = 0; //count for generating average

    //assume there is at least one input

    if (scanf("%lf", &temperature) == 1) {
        sum_temp += temperature;
        sum_temp_weekly += temperature;
        count_temp++;
        max_temp = temperature;
        min_temp = temperature;
    }
    else return 0;

    while (scanf("%lf", &temperature) == 1) { //as long as input is legal

        sum_temp += temperature;
        sum_temp_weekly += temperature;
        count_temp++;

        if (temperature > max_temp) { //max temp check
            max_temp = temperature;
        }
        if (temperature < min_temp) { //min temp check
            min_temp = temperature;
        }
        if (count_temp % 7 == 0) { //checks if weekly rotation
            count_weeks++;
            printf("Week %d average: %.2lf\n",
                count_weeks, sum_temp_weekly / 7);
            sum_temp_weekly = 0; //resets the sum for the next week avg
        }
    }

    //print the values via desired order
    printf("Max temp: %.2lf\n", max_temp);
    printf("Min temp: %.2lf\n", min_temp);
    avg_overall_temp = sum_temp / count_temp;
    if (avg_overall_temp < ERROR_TEMP) { //avg temp is not likely in israel
        printf("Error in input!\n");
    } else {
        printf("Average temp: %.2lf\n", avg_overall_temp);
    }

    return 0;
}
