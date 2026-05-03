#include <stdio.h>


int elevar_cuadrado(int x){
    return x*x;
}

void elevar_cuadrado2(int x){
    int prod=x*x;
    printf("FUNCION 2: %d^2 = %d\n",x,prod);
}

void mostrar(int *x){
    printf("La direccion de memoria de la variable: %p\n",x);
    printf("Valor de la variable: %d\n",*x);
}

void invertir(int *a,int *b){
    printf("a= %d y b= %d\n",*a,*b);
    int aux=*a;
    *a=*b;
    *b=aux;
    printf("a= %d y b= %d\n",*a,*b);

}
void orden(int *a, int *b) {
    // Solo intercambiamos si el primero es mayor que el segundo
    if (*a > *b) {
        int aux = *a;
        *a = *b;
        *b = aux;
        printf("Se realizo un intercambio. a=%d y b=%d\n",*a,*b);
    } else {
        printf("Ya estaban ordenados.\n");
    }
}

int main(){

    printf("Ingrese un numero entero : \n");
    int num;
    scanf("%d",&num);
    //funcion a
    int cuadrado=elevar_cuadrado(num);
    printf("FUNCION 1: %d^2 = %d\n",num,cuadrado);

    //funcion b
    elevar_cuadrado2(num);

    //Funcion c
    int *p=&num;
    mostrar(p);

    //funcion d
    printf("Ingrese el primer numero de un par: \n");
    int a;
    scanf("%d",&a);

    printf("Ingrese el segundo numero de un par: \n");
    int b;
    scanf("%d",&b);

    invertir(&a,&b);

    //funcion e

    printf("Ingrese el primer numero de un par: \n");
    int n1;
    scanf("%d",&n1);

    printf("Ingrese el segundo numero de un par: \n");
    int n2;
    scanf("%d",&n2);

    orden(&n1,&n2);

}