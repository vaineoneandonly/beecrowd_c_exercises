/*
Read an integer value corresponding to a person's age (in days) and print it in years, months and days, 
followed by its respective message “ano(s)”, “mes(es)”, “dia(s)”.

Note: only to facilitate the calculation, consider the whole year with 365 days and 30 days every month. 
In the cases of test there will never be a situation that allows 12 months and some days, like 360, 363 or 364.
This is just an exercise for the purpose of testing simple mathematical reasoning.

Input
The input file contains 1 integer value.

Output

Print the output, like the following example.
Input Sample 	Output Sample
400
                1 ano(s)
                1 mes(es)
                5 dia(s) */

#include <stdio.h>

int main()
{

    int age_in_days, i = 0;
    int factor[3] = {365, 30};
    int age[3] = {0, 0, 0};

    scanf ("%d", &age_in_days);

    for (i = 0; i <= 1; ++i)
    {
        age[i] = age_in_days / factor[i];
        age_in_days %= factor[i];
    }

    // problemas. Tentando colocar isso dentro do loop, mas não encontro um jeito por conta de não achar uma solução pra última etapa
    age[2] = age_in_days;

    printf ("%d ano(s)\n%d mes(es)\n%d dia(s)\n", age[0], age[1], age[2]);

}