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
//    int value_quantity [7][2] = {{1, 0}, {5, 0}, {10, 0}, {50, 0}, {100, 0}, {500, 0}, {1000, 0}};
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
    int value_and_quantity[3][2] = {{1, 0}, {5, 0}, {10, 0}};
    int number, i, mcd = 0;

    scanf ("%d", &number);

    for (i = 2; i >= 0; --i)
    {
        if (number >= (value_and_quantity[i][0] - 1))
        {
            printf ("%d é próximo de %d, então vamos pegar o %d\n", number, value_and_quantity[i][0], value_and_quantity[i][0]);
            break;
        }
        else
        {
            printf ("procurando\n");
        }

    }


    /* pega o número. Número é maior ou igual que o valor do numeral romano mais alto?

    */


}