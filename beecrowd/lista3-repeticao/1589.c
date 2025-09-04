#include <stdio.h>

int main(){
    int r1, r2, control = 0;

    scanf("%d", &control);
    for (int i = 0; i < control; i++)
    {
        scanf("%d %d", &r1, &r2);
        printf("%d\n", r1 + r2);
    }
    
    return 0;
}