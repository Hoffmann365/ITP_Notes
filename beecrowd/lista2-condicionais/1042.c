#include <stdio.h>

int main(){

    int number1, number2, number3;

    scanf("%d %d %d", &number1, &number2, &number3);

    if (number1 < number2 && number1 < number3)
    {
        printf("%d\n", number1);
        if (number2 < number3)
        {
            printf("%d\n%d\n", number2, number3);
        }else {
            printf("%d\n%d\n", number3, number2);
        }
        
    }
    else if (number2 < number1 && number2 < number3)
    {
        printf("%d\n", number2);
        if (number1 < number3)
        {
            printf("%d\n%d\n", number1, number3);
        }else {
            printf("%d\n%d\n", number3, number1);
        }
    }
    else if (number3 < number2 && number3 < number1)
    {
        printf("%d\n", number3);
        if (number2 < number1)
        {
            printf("%d\n%d\n", number2, number1);
        }else {
            printf("%d\n%d\n", number1, number2);
        }
    }

    printf("\n%d\n%d\n%d\n", number1, number2, number3);
    
    return 0;
}