#include <stdio.h>

int main(){
    float number = 0;
    int positive = 0;
    float media = 0;

    for (int i = 0; i < 6; i++)
    {
        scanf("%f", &number);
        if (number > 0)
        {
            positive += 1;
            media += number;
        }
        
    }
    printf("%d valores positivos\n", positive);
    printf("%.1f\n", media / positive);

    return 0;
}