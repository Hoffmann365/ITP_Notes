#include <stdio.h>

int main(){
    
    double a, b, c, number1, number2, number3;

    scanf("%lf %lf %lf", &number1, &number2, &number3);

    a = number1;
    b = number2;
    c = number3;

    //ordena os lados em ordem decrescente
    if (number1 > number2 && number1 > number3)
    {
        a = number1;
        if (number2 > number3)
        {
            b = number2;
            c = number3;
        }else {
            b = number3;
            c = number2;
        }
        
    }
    else if (number2 > number1 && number2 > number3)
    {
        a = number2;
        if (number1 > number3)
        {
            b = number1;
            c = number3;
        }else {
            b = number3;
            c = number1;
        }
    }
    else if (number3 > number2 && number3 > number1)
    {
        a = number3;
        if (number2 > number1)
        {
            b = number2;
            c = number1;
        }else {
            b = number1;
            c = number2;
        }
    }

    //verificação dos triângulos
    if (a >= (b + c))
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else{
        if ((a * a) == ((b * b) + (c * c)))
        {
            printf("TRIANGULO RETANGULO\n");
        }
        else if ((a * a) > ((b * b) + (c * c)))
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        else
        {
            printf("TRIANGULO ACUTANGULO\n");
        }

        if (a == b && b == c)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if (a == b || b == c || a == c)
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}