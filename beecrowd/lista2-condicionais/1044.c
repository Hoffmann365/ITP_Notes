#include <stdio.h>

int main(){
    
    int value1, value2;
    
    scanf("%d %d", &value1, &value2);

    if (value1 > value2)
    {
        if (value1 % value2 == 0)
        {
            printf("Sao Multiplos\n");
        }else{
            printf("Nao sao Multiplos\n");
        }
        
    }else if (value2 % value1 == 0)
    {
        printf("Sao Multiplos\n");
    }else{
        printf("Nao sao Multiplos\n");
    }
    
    return 0;
}