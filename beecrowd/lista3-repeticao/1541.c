#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    double area, lado;

    while (1)
    {
        scanf("%d", &a);
        if (a == 0)
        {
            break;
        }
        scanf("%d %d", &b, &c);

        area = a * b;
        lado = sqrt((area * 100.0) / c);

        printf("%d\n", (int)lado);
    }
    
    return 0;
}