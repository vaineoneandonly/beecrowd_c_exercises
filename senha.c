#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int senha[4], tentativa[4], cont_senha[4], cont_tentativa[4];
    int hit, semihit, chance = 0;

    //-----------------------------gera senha
    srand(time(0));

    for (int i = 0; i < 4; ++i)
        senha[i] = (rand() % (4 - 1 + 1) + 1);


    //----------------------------tela
    system ("clear");


    //----------------------------pega tentativa
nova_tentativa:

    for (int i = 0; i < 4; ++i)
        scanf ("%d", &tentativa[i]);

    //----------------------------checagens
    //-------------acerto
    for (int i = 0; i < 4; ++i)
        if (tentativa[i] == senha[i])
        {
            ++hit;
            cont_senha[i] = 1;
            cont_tentativa[i] = 1;
        }

    //------------semiacerto
    for (int j = 0; j < 4; ++j)
        if (cont_tentativa[j] == 0)
            for (int i = 0; i < 4; ++i)
                if (cont_senha[i] == 0)
                    if (tentativa[j] == senha[i])
                        {
                            ++semihit;
                            cont_tentativa[j] = 1;
                            cont_senha[i] = 1;

                        }

    //-------------------------impressões
    for (int i = 0; i < 4; ++i)
        printf ("%d ", tentativa[i]);
    printf ("- %d %d", hit, semihit);
    putchar ('\n');

    //------------------------perdeu/ganhou
    if (hit == 4)
    {
        system ("clear");
        printf ("GANHAMO :)");
        printf ("\n");
        EOF;
    }
    else if (chance <= 6)
    {
        for (int i = 0; i < 4; ++i)
        {
            cont_senha[i] = 0;
            cont_tentativa[i] = 0;

        }
    
        hit = 0;
        semihit = 0;

        ++chance;

        goto nova_tentativa;


    }
    else
    {
        for (int i = 0; i < 7; ++i)
            printf ("-");

        printf (" a senha era");

        putchar ('\n');

        for (int i = 0; i < 4; ++i)
            printf ("%d ", senha[i]);
        
        putchar ('\n');

        printf ("PERDEMO :(");
        printf ("\n");
        EOF;

    }

}