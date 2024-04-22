/*
Make a program that reads three floating point values: A, B and C. Then, calculate and show:
a) the area of the rectangled triangle that has base A and height C. 
b) the area of the radius's circle C. (pi = 3.14159)
c) the area of the trapezium which has A and B by base, and C by height.
d) the area of ​​the square that has side B.
e) the area of the rectangle that has sides A and B.

Input
The input file contains three double values with one digit after the decimal point.

Output
The output file must contain 5 lines of data. Each line corresponds to one of the areas described above,
always with a corresponding message (in Portuguese) and one space between the two points and the value. 
The value calculated must be presented with 3 digits after the decimal point.
*/

#include <stdio.h>

int main()
{
    int i = 0;
    float A, B, C = 0;
    double pi = 3.14159;
    float area[5];
    char *shape[] = {"0", "TRIANGULO", "CIRCULO", "TRAPEZIO", "QUADRADO", "RETANGULO"};
    //discuss how to build an array here for the shapes.
    //por que razão o elemento zero no array de ponteiros aqui complica a execução? Até tive que trocar a listagem das áreas pra poder fazer executar
    //o loop do jeito certo depois.

    //segmentation fault?????

    scanf ("%f %f %f", &A, &B, &C);

    area[0] = 0;
    area[1] = A * C / 2;
    area[2] = pi * (C * C);
    area[3] = 1/2.0 * (A + B) * C;
    area[4] = B * B;
    area[5] = A * B;

    for (i = 1; i <= 5; ++i)
       printf ("%s: %.3f\n", shape[i], area[i]);

}
