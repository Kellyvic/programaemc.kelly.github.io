#include <stdio.h>

void main() {
    int M;
    printf("Digite um mes:");
    scanf ("%d",&M);

    if (M>=1 && M<=6)
    {
        printf ("Primeiro semestre:");
    }
    else
    {
        printf ("Segundo semestre:");
    }

}


