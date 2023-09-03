#include <stdio.h>

int main (void)
{
    int numero, antecessor, sucessor;
    printf("digite um numero: ");
    scanf ("%d", &numero);
    antecessor=numero - 1;
    sucessor=numero+1;

     printf ("Numero escolhido:%d \n",numero);
     printf ("Numero antecessor:%d \n",antecessor);
     printf ("Numero sucessor:%d",sucessor);

     return 0;


}