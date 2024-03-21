#include <stdio.h>

int nombrePositif()
{
    int nombre;

    printf("Entrez un nombre : ");
    scanf("%d",&nombre);

    while(nombre < 0)
    {
        printf("Vous devez entrer un nombre positif et non negatif : ");
        scanf("%d",&nombre);
    }

    return nombre;
}

int main()
{
    int nombre;

    nombre = nombrePositif();

    printf("Les nombres pairs compris entre 1 et %d sont : ",nombre);
    for(int i=1; i<=nombre; i++)
    {
        if(i % 2 == 0)
            printf("%d; ",i);
    }

    printf("\n");

    return 0;
}