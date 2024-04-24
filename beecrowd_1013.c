#include <stdio.h>

int main()
{

    int a, b, c, maior = 0;

    scanf ("%d %d %d", &a, &b, &c);

    //se o elemento visualizado for maior que o anterior, substituir a variável "maior".

    //7 14 106
    //10 9 8

    maior = a;
    if (b > a)
    {
        if (c > b)
            maior = c;
        else
            maior = b;
    }
    else if (c > a)
        maior = c;

    printf ("%d eh o maior\n", maior);

}


/*
a > b
a > c
-----
b > a
b > c
-----
c > a
c > b

if (b > a)

    if (c > b)
        maior = c;
    else:
        maior = b;

else if (c > a)
    maior = c;
    
 
  
*/