#include <stdio.h>

int main(){
    int code, qtd;
    float price;

    scanf("%d %d", &code ,&qtd);

    switch (code)
    {
    case 1: price = 4.00; break;
    case 2: price = 4.50; break;
    case 3: price = 5.00; break;
    case 4: price = 2.00; break;
    case 5: price = 1.50; break;
    default: printf("Product not found\n"); price = 0.00; break;
    }

    printf("Total: R$ %.2f\n", qtd * price);

    return 0;
}