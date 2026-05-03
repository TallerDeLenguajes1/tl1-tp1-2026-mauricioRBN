#include <stdio.h>
int main(){
    printf("Hola Mundo");
    int a=10;
    int *p=&a;
    printf("El contenido del puntero: %d \n", *p);
    printf("La direccion de memoria almacenada en el puntero es: %p \n",p);
    printf("La direccion de memoria de la variable apuntada es: %p \n",&a);
    printf("La direccion de memoria del puntero es: %p \n",&p);
    printf("El tamaño de momoria de la variable original: %d bytes\n",sizeof(a));

}