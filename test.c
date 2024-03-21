#include <stdio.h>

int main()
{
    int nombre;

    printf("Entrez un nombre : ");
    scanf("%d",&nombre);

    printf("Les nombres pairs compris entre 1 et %d sont : ",nombre);
    for(int i=1; i<=nombre; i++)
    {
        if(i % 2 == 0)
            printf("%d; ",i);
    }

    printf("\n");

    return 0;
}