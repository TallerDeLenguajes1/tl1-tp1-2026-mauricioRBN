#include <stdio.h> // add stdio.h
void duplicar_numero(int *numero) { // add * , apunta a la direccion de memoria ingresada
    *numero = *numero * 2;       // add *
}

int main() {
    int valor1;
    int valor2;

    printf("Ingrese el primer valor: ");
    scanf("%d",&valor1);   // add &

    printf("Ingrese el segundo valor: ");
    scanf("%d", &valor2);

    int suma = valor1 + valor2; // add  ;
    printf("La suma es: %d\n", suma);

    duplicar_numero(&valor1);
    printf("El primer valor duplicado es: %d\n", valor1);

    return 0; // add ;
}