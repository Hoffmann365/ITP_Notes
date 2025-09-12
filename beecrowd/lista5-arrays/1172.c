#include <stdio.h>

int main(){
    int numbers[10];

    for (int i = 0; i < 10; i++){
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < 10; i++){
        if (numbers[i] <= 0)
        {
            numbers[i] = 1;
        }
    }
    for (int i = 0; i < 10; i++){
        printf("X[%d] = %d\n", i, numbers[i]);
    }
    
    return 0;
}