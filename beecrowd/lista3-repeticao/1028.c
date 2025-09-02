#include <stdio.h>

int main(){
    int a, b, count = 0;

    scanf("%d", &count);

    for (int i = 0; i < count; i++)
    {
        scanf("%d %d", &a, &b);
        while (b != 0)
        {
            int r = a % b;
            a = b;
            b = r;
        }
        printf("%d\n",a);
    }

    return 0;
}