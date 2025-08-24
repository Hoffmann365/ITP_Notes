#include <stdio.h>

int main(){
    int horaInicial, horaFinal, time;
    scanf("%d %d", &horaInicial, &horaFinal);

    time = horaFinal - horaInicial;

    if (time < 0)
    {
        time += 24;
    }
    if (time == 0)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }else{
        printf("O JOGO DUROU %d HORA(S)\n", time);
    }
    
    return 0;
}