#include <stdio.h>
#define seconds 3600
#define hours 24
#define days 365
int main() {
    int years = 18;
    int age_days    = years * days;
    int age_hours   = age_days  * hours;
    int age_seconds = age_hours * seconds;
    int age_ticks   = age_seconds;
    printf("Тики: %d|", age_ticks);
    printf("Часы: %d|", age_hours);
    printf("Дни: %d|",  age_days);
    printf("Годы: %d\n",  years);
    return 0;
}