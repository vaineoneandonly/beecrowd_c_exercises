#include <stdio.h>
#include <stdlib.h>

int main()
{

    int code[3][2] = {{1, 0}, {2, 0}, {3, 0}};
    int try[3] = {0, 0, 0};

    int hit = 0;
    int semi_hit = 0;

new_try:
    for (int i = 0; i <= 2; ++i)
        scanf ("%d", &try[i]);


    for (int i = 0; i <= 2; ++i)
    {
        if (try[i] == code[i][0])
        {
            ++hit;
            code[i][1] = 1;
        }   

    }

    for (int i = 0; i <= 2; ++i) // for every number in the code itself,
    {
        if (code[i][1] == 0) //if the number still hasn't been found,
        {
            for (int j = 0; j <= 2; ++j) //search for it in every number tried.
            {
                if (code[i][0] == try[j]) //if it's there somewhere, increase the ammount of semihits.
                    ++semi_hit;

            }

        }
  
    }

    
    system ("clear");

    for (int i = 0; i <= 2; ++i)
        printf ("%d ", try[i]);
    
    printf (" - %d %d\n", hit, semi_hit);

    hit = 0;
    semi_hit = 0;
    for (int i = 0; i<= 2; ++i)
        code[i][1] = 0;

    goto new_try;

}