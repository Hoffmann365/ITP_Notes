#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int N;
    scanf("%d\n", &N); // lê número de linhas

    char linha[1001];

    while (N--) {
        fgets(linha, 1001, stdin);

        // remove quebra de linha do fgets
        linha[strcspn(linha, "\n")] = '\0';

        int len = strlen(linha);

        // 1ª passada: letras +3
        for (int i = 0; i < len; i++) {
            if (isalpha(linha[i])) {
                linha[i] += 3;
            }
        }

        // 2ª passada: inverter
        for (int i = 0; i < len / 2; i++) {
            char tmp = linha[i];
            linha[i] = linha[len - i - 1];
            linha[len - i - 1] = tmp;
        }

        // 3ª passada: da metade em diante, -1
        for (int i = len / 2; i < len; i++) {
            linha[i] -= 1;
        }

        printf("%s\n", linha);
    }

    return 0;
}
