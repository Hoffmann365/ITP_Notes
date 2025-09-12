#include <stdio.h>
#include <string.h>

int main() {
    char s[110];
    
    scanf("%s", s);

    int count = 0;
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        if (s[i] == '1')
            count++;
    }

    if (count % 2 == 0)
        strcat(s, "0");
    else
        strcat(s, "1");

    printf("%s\n", s);

    return 0;
}
