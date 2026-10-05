#include <stdio.h>
int main(void){
    int YEARS, DAYS_PER_YEAR, TOTAL_DAYS;
    YEARS = 3;
    DAYS_PER_YEAR = 365;
    TOTAL_DAYS = YEARS * DAYS_PER_YEAR;
    printf("YEARS = %d\nDAYS_PER_YEAR = %d\nTOTAL_DAYS = %d\n", YEARS, DAYS_PER_YEAR, TOTAL_DAYS);
    return 0;
}