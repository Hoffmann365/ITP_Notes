#include <stdio.h>
#include <string.h>

int main(){
    int N, cipherKey;
    char message[51];

    scanf("%d", &N);

    while (N--)
    {
        scanf("%s", &message);
        scanf("%d", &cipherKey);
        
        int len = strlen(message);

        for (int i = 0; i < len; i++)
        {
            char c = message[i];
            if (c >= 'A' && c <= 'Z')
            {
                message[i] = ((c - 'A' - cipherKey+26) % 26) + 'A';
            }
            if (c >= 'a' && c <= 'z')
            {
                message[i] = ((c - 'a' - cipherKey+26) % 26) + 'a';
            }
        }

        printf("%s\n", message);
    }
    
    return 0;
}