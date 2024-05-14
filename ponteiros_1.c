#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Parte 1. Parâmetros por "referência".
//-func-prototypes---------------------------------------------
void set(int *a, int val)
{
    a = &val;
    *a = val;

    printf ("%d %d", *a, val);

}
void swap(int *a, int *b)
{
    int aux = *a;

    *a = *b;
    *b = aux;

    printf ("a = %d\nb = %d\n", *a, *b);

}
//-func-tests--------------------------------------------------
void set_test()
{
    int *test;
    int num = 0;

    scanf ("%d", &num);

    set(test, num);

}
void swap_test()
{
    int blinga = 47;
    int decrim = blinga;
    int blonga = 48;

    scanf ("%d %d", &blinga, &blonga);

    swap (&blinga, &blonga);

    if (blinga != decrim)
        swap (&blinga, &blonga);

} 
// Parte 2. Strings.
//-func-prototypes-----------------------------------------------
int str_len(char *s)
{
    char *address = s;
    int word_len = 0;

    while (*address != '\0')
    {
        ++word_len;
        ++address;        
    }

    //printf ("%d", word_len);
    
    return word_len;

}
int str_cpy(char *s, char *t)
{
    for (int i = 0; i <= str_len(t); ++i)
        s[i] = *(t+i);
    
}
int str_cmp(char *s, char *t)
{
    int s_len = str_len (s);
    int t_len = str_len (t);

    if (s_len != t_len)
    {
        if (s_len > t_len)
            return 1;
        else
            return -1;  
    }
    else
        return 0;
 
}
char *str_cat(char *dest, char *src, size_t n)
{

    /*int x = str_len(dest);
    int i = 0;

    for (i = 0; i <= n; ++i)
        dest[x+i] = src[i];

    //dest[x+i+1] = '\0';
    printf ("%s\n", dest);
    printf ("%s\n", src); */

    int x = str_len(dest);
    int i = 0;

    for (i = 0; i <= x; ++i)
        printf ("%c", dest[i]);

    dest[i+x+1] = 'y';

    printf ("%c", dest[i+x]);


}
//-func-tests--------------------------------------------------
void str_len_test()
{

    //char *word = "absolutely";
    //str_len (word);

    assert(str_len("") == 0);
    assert(str_len("teste strlen") == 12);

}
void str_cpy_test()
{
    char strcpy_test[] = "resposta errada";

    str_cpy(strcpy_test + 9, "correta");
    printf ("%s\n", strcpy_test);

    assert(!memcmp(strcpy_test, "resposta correta", strlen("resposta correta")));

}
void str_cmp_test()
{
    assert(str_cmp("aba", "abc") == 0);
    assert(str_cmp("abc", "abcd") < 0);
    assert(str_cmp("abcdz", "abcde") == 0);
    assert(str_cmp("abcdea", "abcde") > 0);
    assert(str_cmp("igual", "igual") == 0);    

}
void str_cat_test()
{
    str_cat ("abc", " def", 20);


}
//-main-exec------------------------------------------------------
int main()
{
    //----------------tests for part 1
    //set_test();
    //printf ("\n");

    //swap_test();
    //printf ("\n");
    
    //-----------------tests for part 2
    //str_len_test();
    //printf ("\n");

    //str_cpy_test();
    //printf ("\n");

    //str_cmp_test();
    //printf ("\n");

    //char sentence[] = "gotta add";
    //char to_add[] = " this to the end.";
//
    //int x = str_len(sentence);
    //int n = 5;
    //int i = 0;
//
    //scanf ("%d", &n);
//
    //for (i = 0; i <= n; ++i)
    //    sentence[x+i] = to_add[i];
//
    //sentence[x+i+1] = '\0';
    //printf ("%s\n", sentence);


    str_cat_test();

}
