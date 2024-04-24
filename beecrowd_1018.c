/*
In this problem you have to read an integer value and calculate the smallest possible number of banknotes in which the value may be decomposed. 
The possible banknotes are 100, 50, 20, 10, 5, 2 and 1. Print the read value and the list of banknotes.

Input
The input file contains an integer value N (0 < N < 1000000).

Output
Print the read number and the minimum quantity of each necessary banknotes in Portuguese language, as the given example. 
Do not forget to print the end of line after each line, otherwise you will receive “Presentation Error”.
*/

#include <stdio.h>

int main ()
{

    int value, i = 0;
    int note[7] = {100, 50, 20, 10, 5, 2, 1};

    scanf ("%d", &value);

    printf ("%d\n", value);

    for (i = 0; i <= 6; ++i)
    {
        printf ("%d nota(s) de R$ %d,00\n", value / note[i], note[i]);
        value %= note[i];
    }

}