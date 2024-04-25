#include <stdio.h>

int main()
{

    int values[7] = {1, 5, 10, 50, 100, 500, 1000};
    char *romans[7] = {"I", "V", "X", "L", "C", "D", "M"};

    int number, rounded, j = 0;
    int i = 6;
    int factor = 1;

    scanf ("%d", &number);

    while ((number % values[i]) != 0)
    {
        printf ("%d\n", number %values[i]);
        
        factor = number / values[i];
        rounded = factor * values[i];

        for (j = 0; j < factor; ++j)
            printf ("%s", romans[i]);


        number %= values[i];
        --i;
    
    }

    factor = number / values[i];

    for (j = 0; j < factor; ++j)
        printf ("%s", romans[i]);

}


/*
 se, ao dividir o valor pelo maior tier possível restar algo, operar o resto.
 // check difference betweeen number and rounded number
 // for 4s and 9s, check step ratio?







*/