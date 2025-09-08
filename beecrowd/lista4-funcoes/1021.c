#include <stdio.h>

int main(){
    // void calcularNotas(int value){
    //     int notas001, notas002, notas005, notas010, notas020, notas050, notas100;
    //     double moedas001, moedas005, moedas010, moedas025, moedas050, moedas100;

    //     notas001 = 

    // }

    int parteInteira, parteDecimal;
    double numero;

    scanf("%lf", &numero);

    parteInteira = (int)numero;
    parteDecimal = (int)((numero - parteInteira) * 100);

    printf("%d\n", parteDecimal);

    // int calcMoney(int value, int divisor){
    //     int result;

    // }

    return 0;
}