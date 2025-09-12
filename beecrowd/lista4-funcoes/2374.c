#include <stdio.h>

int main(){
    int requiredPress, actualPress, pressDiff;

    scanf("%d %d", &requiredPress, &actualPress);

    pressDiff = requiredPress - actualPress;

    printf("%d\n", pressDiff);

    return 0;
}