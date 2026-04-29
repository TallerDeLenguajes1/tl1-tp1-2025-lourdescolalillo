#include <stdio.h>
#include <math.h>

int calcularCuadrado (int n)
{
    int cuadrado;
    cuadrado = n*n;
    return cuadrado;
}

void calcularCuadradoVoid (int n)
{
    int cuadrado;
    cuadrado = n*n;
    printf("El cuadrado de n es: %d\n ",cuadrado);
}

void contenido_y_direccion(int variable)
{
    printf("el contenido de la variable es: %d\n",variable);
    printf("la direccion de memoria de la variable es: %p\n",&variable);

}

void invertir(int a,int b)
{
    int aux = 0;
    aux = a;
    a=b;
    b=aux;
    printf("a = %d - b = %d\n",a,b);
}

void ordenarAscendentemente (int a, int b)
{
    int mayor = 0;
    int menor = 0;
    if(a<b){
        menor = a;
        mayor =b ;
        printf("a = %d - b = %d\n",menor,mayor);
    }else{
        menor = b;
        mayor = a;
    }   
        printf("a = %d - b = %d\n",menor,mayor);
}


int main(){
    int num1;
    int num2;

    printf("ingrese el primer nro:\n");
    scanf("%d",&num1);

    printf("ingrese el segundo nro:\n");
    scanf("%d",&num2);

    printf("el cuadrado de %d es: %d",num1,calcularCuadrado(num1));
    calcularCuadradoVoid(num1);
    contenido_y_direccion(num2);
    invertir(num1,num2);
    ordenarAscendentemente(num1,num2);
    return 0;
}