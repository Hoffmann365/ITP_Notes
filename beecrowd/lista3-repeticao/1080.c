#include <stdio.h>

int main(){
    int number, position, maior = 0;

    for (int i = 1; i <= 100; i++)
    {
        scanf("%d", &number);
        if (number > maior)
        {
            position = i;
            maior = number;
        }
    }
    printf("%d\n", maior);
    printf("%d\n", position);

    return 0;
}