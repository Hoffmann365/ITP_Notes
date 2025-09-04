#include <stdio.h>

int main(){
    int control;
    scanf("%d", &control);
    for (int i = 1; i <= control; i++)
    {
        if (i % 2 == 1)
        {
            printf("%d\n", i);
        }   
    }

    return 0;
}