#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD 5
int retornarTotal();
int main()
{
    int numeroIngresado;
    int listadoDeNotas[CANTIDAD];
    int i;
    int mayor;
    int menor;
    int promedio;
    int sumaDeNotas;
 /*   printf(" tamaño :$d",sizeof(numeroIngresado));
    printf(" tamaño :%d",sizeof(listadoDeNotas));
    printf("dirección :%d",&numeroIngresado);
    printf("dirección :%d",listadoDeNotas);
*/
    for(i=0;i<CANTIDAD;i++)
    {
         printf("ingrese nota n %d:",i+1);
         scanf("%d",&numeroIngresado);

         listadoDeNotas[i]=numeroIngresado;
    }
    for(i=0;i<CANTIDAD;i++)
    {
         printf("la nota es: %d",listadoDeNotas[i]);
    }
    for(i=0;i<CANTIDAD;i++)
    {
         if(i=0||listadoDeNotas[i]>mayor)
         {
            mayor=listadoDeNotas[i];
         }
    }
    printf("\n el mayor es el: %d",mayor);

    for(i=0;i<CANTIDAD;i++)
    {
         if(i=0||listadoDeNotas[i]>menor)
         {
            menor=listadoDeNotas[i];
         }
    }
    printf("\n el menor es el: %d",menor);

    for(i=0;i<CANTIDAD;i++)
    {
       sumaDeNotas=sumaDeNotas+listadoDeNotas[i];
    }
        promedio=sumaDeNotas/CANTIDAD;

    printf(("\n la suma es: %d",sumaDeNotas));
    printf(("\n el promedio es: %d",promedio));
    return 0;
}
