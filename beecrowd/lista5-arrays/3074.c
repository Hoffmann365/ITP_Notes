#include <stdio.h>
#include <string.h>

void somaIntervalo(int ai, int aj, int numbers[]){
    int soma = 0;
    for (int i = ai; i <= aj; i++)
    {
        soma += numbers[i];
    }
    
    printf("%d\n", soma);
}

void invertBits(int ai, int aj, int k, int numbers[]){
    for (int i = ai; i <= aj; i++)
    {
        numbers[i] ^= (1 << k); 
    }

}

int main(){
    int arrayLen, count;

    scanf("%d", &arrayLen);

    int numbers[arrayLen];

    for (int i = 0; i < arrayLen; i++)
    {
        scanf("%d", &numbers[i]);
    }

    scanf("%d", &count);

    while (count--)
    {
        char op[10];
        scanf("%s", &op);

        if (strcmp(op, "SUM") == 0)
        {
            int ai, aj;
            scanf("%d %d", &ai, &aj);
            somaIntervalo(ai, aj, numbers);
        }
        if (strcmp(op, "INVERT") == 0)
        {
            int ai, aj, k;
            scanf("%d %d %d", &ai, &aj, &k);
            invertBits(ai, aj, k, numbers);
        }
        
    }
    
    return 0;
}