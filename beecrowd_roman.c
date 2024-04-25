/* written by me so might be messy lol
    write a program that converts an integer into roman numerals.

    input =

*/

#include <stdio.h>

//deprecated. doesn't consider the subtractions
//int main()
//{
//
//    //letters we need are I, V, X, L, C, D, M
//    
//    // 35 = XXXV                                                                                           _
//    // goes up to 4999. There's another one for 5000 and beyond which is V with this thing on top _ like   V
//
//    char *roman[7] = {"I", "V", "X", "L", "C", "D", "M"};
//    int value_quantity [7][2] = {{1, 1}, {5, 0}, {10, 1}, {50, 0}, {100, 1}, {500, 0}, {1000, 1}};
//    int number, i = 0;
//
//    scanf ("%d", &number);
//
//    for (i = 6; i > 0; --i)
//    {
//        value_quantity[i][1] = number / value_quantity[i][0];
//        printf ("%s: %d\n", roman[i], value_quantity[i][1]);
//        number %= value_quantity[i][0];
//    }
//        
//
//}

int main()
{

    char *roman[3] = {"I", "V", "X"};
    int value_and_flag[3][2] = {{1, 1}, {5, 0}, {10, 1}};
    int number, i, j, diff = 0;

    scanf ("%d", &number);

    for (i = 2; i >= 0; --i)
    {
        if (number >= (value_and_flag[i][0] - 1))
        {
            diff = number - (value_and_flag[i][0]);
            break;
        }

    }
    
    if (diff != 0)
    {
        if (diff > 0)
        {
            printf ("%s", roman[i]);
            for (j = 0; j < diff; ++j)
                printf ("%s", roman[0]);
        }
        else
        {   
            printf ("%s", roman[0]);
            printf ("%s", roman[i]);
        }

    }
    else
        printf ("%s", roman[i]);  

    printf ("\n");  

    /* pega o número. Número é maior ou igual que o valor do numeral romano mais alto - valor com bandeira anterior?
                      ENtão vamos pegar esse valor pra subtrair  do próprio valor, e ver a quantidade de "valor com bandeira anterior" que vai nessa parte.
                      Se esse valor for positivo, vamos acrescentar X vezes o "valor com bandeira anterior" depois do número;
                      Se não, colocamos só 1 vez o "valor com bandeira anterior" antes.
    */
    // kinda works, but only works from values from "closest value - previous flagged value" to " closest value + 3*previous flagged value". 
    // need to figure out a way to split the values

}
