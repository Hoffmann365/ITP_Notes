#include <stdio.h>

int main(){
    char name[10];
    double salary, amount, total;

    scanf("%s", &name);
    scanf("%lf", &salary);
    scanf("%lf", &amount);

    total = salary + amount*0.15;

    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}