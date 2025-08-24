#include <stdio.h>

int main() {
    double salario, renda, imposto1, imposto2, imposto3, total;

    scanf("%lf", &salario);
    renda = salario;
    imposto1 = 0.0;
    imposto2 = 0.0;
    imposto3 = 0.0;

    if (salario > 2000.0) {
        if (salario > 4500.0) {
            renda = salario - 4500.0;
            imposto3 = renda * 0.28;
            salario -= renda;
        }
        if (salario > 3000.0) {
            renda = salario - 3000.0;
            imposto2 = renda * 0.18;
            salario -= renda;
        }
        if (salario > 2000.0) {
            renda = salario - 2000.0;
            imposto1 = renda * 0.08;
        }

        total = imposto1 + imposto2 + imposto3;
        printf("R$ %.2f\n", total);
    } else {
        printf("Isento\n");
    }

    return 0;
}
