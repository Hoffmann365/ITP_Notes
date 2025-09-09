#include <stdio.h>
#include <math.h>


int main(){
    double number;
    int value;
    scanf("%lf", &number);
    
    value = (int)round(number * 100);

    int notas[] = {10000, 5000, 2000, 1000, 500, 200};
    int moedas[] = {100, 50, 25, 10, 5, 1};

    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        int qtd = value / notas[i];
        value %= notas[i];
        printf("%d nota(s) de R$ %.2f\n", qtd, notas[i] / 100.0);
    }

    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) {
        int qtd = value / moedas[i];
        value %= moedas[i];
        printf("%d moeda(s) de R$ %.2f\n", qtd, moedas[i] / 100.0);
    }

    return 0;
}