#include <stdio.h>

int main() {
    int variable = 10;
    int *puntero = &variable;

    printf("contenido del puntero: %d\n",*puntero);
    printf("direccion de memoria almacenada en el puntero: %p\n",(void*)puntero);
    printf("direccion de memoria de la variable: %p\n",&variable);
    printf("direccion de memoria del puntero: %p\n",(void*)&puntero);
    printf("tamanio de la memoria de la variable : %d bytes\n",sizeof(variable));
    return 0;
}