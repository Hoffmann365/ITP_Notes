#include <stdio.h>

int main(){
    double M[12][12], soma = 0.0;
    char op;
    int qtd = 0;

    scanf(" %c", &op);

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%lf", &M[i][j]);
        }
    }

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            if ((i < 6 && j > 11 - i) || (i >= 6 && j > i))
            {
                soma += M[i][j];
                qtd++;
            }
        }
    }

    if (op == 'S')
    {
        printf("%1lf\n", soma);
    }
    else if(op == 'M')
    {
        printf("%1lf\n", soma / qtd);
    }
    
    return 0;
}