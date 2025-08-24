#include <stdio.h>

int main(){
    int code1, code2, number1, number2;
    float value1, value2, total;
    
    scanf("%d %d %f", &code1, &number1, &value1);
    scanf("%d %d %f", &code2, &number2, &value2);

    total = number1 * value1 + number2 * value2;

    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}