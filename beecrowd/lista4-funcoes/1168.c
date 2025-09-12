#include <stdio.h>
#include <string.h>

void ledNumbers(){
    int ledsPorDigito[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    char number[101];
    scanf("%s", &number);

    int len = strlen(number);
    int total = 0;

    for (int i = 0; i < len; i++)
    {
        total += ledsPorDigito[number[i] - '0'];
    }

    printf("%d leds\n", total);
}

int main(){

    int numberOfTests;
    scanf("%d", &numberOfTests);

    while (numberOfTests--)
    {
        ledNumbers();
    }
    
    return 0;
}