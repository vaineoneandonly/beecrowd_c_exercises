/*
Make a program that reads a seller's name, his/her fixed salary and the sale's total made by himself/herself in the month (in money). 
Considering that this seller receives 15% over all products sold, write the final salary (total) of this seller at the end of the month, with two decimal places.
    - Don’t forget to print the line's end after the result, otherwise you will receive “Presentation Error”.
    -   Don’t forget the blank spaces.

Input
The input file contains a text (employee's first name), and two double precision values, that are the seller's salary and the total value sold by him/her.

Output
Print the seller's total salary, according to the given example.
*/

#include <stdio.h>

int main ()
{

    //just messing with character arrays in this first part here. Actually found a way to get it to work so I'm keeping the code around for reference
    int c, i, word_len = 0;
    char name[20];

    while ((c = getchar()) != ':')
    {
        if (c != '\b' && c != '\r' && c != '\n')
        {
            name[word_len] = c;
            ++word_len;
        }
    }

    for (i = 0; i < word_len; ++i)
        printf ("%c-%d\n", name[i], name[i]);

    //actual execution of question
    double salary, sold, total = 0;

    scanf ("%lf %lf", &salary, &sold);
    total = salary + (sold * 0.15);

    printf ("TOTAL = R$ %.2lf\n", total);

}
    
