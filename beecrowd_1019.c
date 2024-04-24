/*
Read an integer value, which is the duration in seconds of a certain event in a factory, and inform it expressed in hours:minutes:seconds.

Input
The input file contains an integer N.

Output
Print the read time in the input file (seconds) converted in hours:minutes:seconds like the following example.
*/
#include <stdio.h>

int main()
{

    int N, i = 0;
    int factor[2] = {3600, 60}; //poderia ser generalizado mais com uma outra etapa ampliando o conjunto. Simplificaria ainda mais, mas iria introduzir
    int time[3] = {0, 0, 0};    //dificuldades pra imprimir 

    scanf ("%d", &N);

    for (i = 0; i <= 1; ++i)
    {
        time[i] = N / factor[i];
        N %= factor[i];
    }

    time[2] = N % 60;

    printf ("%d:%d:%d\n", time[0], time[1], time[2]);
    
}