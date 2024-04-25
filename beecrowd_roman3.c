#include <stdio.h>

int main()
{
    char *roman[7] = {"M", "D", "C", "L", "X", "V", "I"};
    int step[7] = {1000, 500, 100, 50, 10, 5, 1};
    int number, factor, i, j, rounded = 0;
    char *last_roman = "M";
    
    scanf ("%d", &number);

    for (i = 0; i <= 6; ++i)
    {
        factor = number / step[i];
        rounded = factor * step[i];

        //printf ("%d-%d-%d-%d\n", number, rounded, factor, step[i]);

        if (factor == 4)
        {
            printf ("%s", roman[i]);
            printf ("%s", last_roman);
        }
        else if (number == 9)
        {
            printf ("%s", roman[6]);
            printf ("%s", roman[4]);
            break; 
        }
        else
        { 
            for (j = 0; j < factor; ++j)
                printf ("%s", roman[i]);
        }  

        last_roman = roman[i];
        number %= step[i];
    }

    printf ("\n"); 
}
    

// (n + passo de 10 seguinte) / fator == passo de 10? 
// && number % step[i] == 9 || 90 || 900
// factor >= 1 && factor <= 3
// check if number is 9 + 10_step 
// se o fator for maior que 1 
//        else if (factor >= 1 && number == 9)
        //{
       //     printf ("%s", roman[6]);
       //     printf ("%s", last_roman);
       //     break;
       // }
 // se 

 /*
49
    printf next step (X)
    printf current (L)
 
 
 
 */      