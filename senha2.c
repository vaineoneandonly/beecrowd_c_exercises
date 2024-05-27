#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{

    int senha[4], resposta[4], contagem_resposta[4], contagem_senha[4];
    int acerto, semiacerto, tentativa = 0;


    srand (time(0));

    for (int i = 0; i < 4; ++i)
        senha[i] = (rand() % (4 - 1 + 1) + 1);


    system ("clear");

    while (tentativa != 6)
    {
        for (int i = 0; i < 4; ++i)
            scanf ("%d", &resposta[i]);

        for (int i = 0; i < 4; ++i)
            if (resposta[i] == senha[i])
            {
                ++acerto;
                contagem_resposta[i] = contagem_senha[i] = 1;
            }

        for (int i = 0; i < 4; ++i)
            if (contagem_resposta[i] == 0)
            {
                for (int j = 0; j < 4; ++j)
                    if (contagem_senha[j] == 0)
                        if (resposta[i] == senha[j])
                        {
                            contagem_senha[j] = 1;
                            ++semiacerto;
                            break;
                        }
                contagem_resposta[i] = 1;    
            }

        printf ("        \\_/> %d %d", acerto, semiacerto);
        putchar ('\n');

        if (acerto == 4)
        {
            printf ("--------\n");
            for (int i = 0; i < 4; ++i)
                printf ("%d ", senha[i]);
            printf ("\nGANHAMO :^)\n");
            break;
        }

        acerto = semiacerto = 0;

        for (int i = 0; i < 4; ++i)
            contagem_resposta[i] = contagem_senha[i] = 0;

        ++tentativa;
    }

    if (tentativa == 6)
    {
        printf ("--------\n");
        for (int i = 0; i < 4; ++i)
            printf ("%d ", senha[i]);
        printf ("\nPERDEMO :^(\n");
    }

}