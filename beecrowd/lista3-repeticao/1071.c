#include <stdio.h>

int main(){
    int n1, n2, control, start, soma = 0;

    scanf("%d %d", &n1, &n2);
    if(n1 > n2)
    {
        start = n2 + 1, control = n1 - 1;
        
    } 
    else if (n2 > n1)
    {
        start = n1 + 1, control = n2 - 1;
    }
     

    for (int i = start; i <= control; i++)
    {

        if (i % 2 != 0)
        {

            soma += i;

        }   
    }
    printf("%d\n", soma);
    
    return 0;
}