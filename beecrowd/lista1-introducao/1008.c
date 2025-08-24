#include <stdio.h>

int main(){
    int number, workedHours;
    float hourValue, salary;

    scanf("%d", &number);
    scanf("%d", &workedHours);
    scanf("%f", &hourValue);

    salary = workedHours * hourValue;

    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2f\n", salary);

    return 0;
}