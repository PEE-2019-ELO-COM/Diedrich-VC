#include <stdio.h>

int main()
{
    char in;
    
    printf("Entre com o char 0 a 9:\n");
    scanf("%c",&in);
    
    char A = in&0x01?1:0, B = in&0x02?1:0, C = in&0x04?1:0, D = in&0x08?1:0, a = B|!A&!C|B&C^A&C|D, b = !C|!B&!A|B&A, c = A|C|!B&!A, d = !C&B|!C&!A|B&C^A&C|D, e = !A&B|!A&!C, f = !B&!A|B&C^A&C|D, g = B|C|D ,out = 1*a + 2*b + 4*c + 8*d + 16*e+ 32*f + 64*g;
    
    printf("Char out: %d\n",out);
    
    //Print do numero de 7 segmentos:
    
    if (a) printf(" _ ");
    printf("\n");
    if (f)
        printf("|");
    else
        printf(" ");
    if (g)
        printf("_");
    else
        printf(" ");
    if (b) printf("|");
    printf("\n");
    if (e)
        printf("|");
    else
        printf(" ");
    if (d)
        printf("_");
    else
        printf(" ");
    if (c) printf("|");
    printf("\n");
}
