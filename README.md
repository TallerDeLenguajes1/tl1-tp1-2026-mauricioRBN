# Trabajo Práctico N° 1
**Alumno:** Fernandez Mauricio Damian  
*(Se utilizará este espacio para explicar la resolución de los ejercicios del TP 1)*

## Temas: Git, GitHub, debugging

### _Punto 2_

### **¿Por qué es conveniente incluir .gitignore?**

Conviene incluirlo para no subir al repositorio remoto archivos o capetas no deseados.

### **¿Cuándo se debe hacer?**

Se debe hacer antes de pasar los archivos al staging area, osea al area de preparacion. Porque una vez subidos pueden generarse confusiones o problemas de codigo.

### **¿Cómo configuraría el archivo .gitignore?**

En un archivo .gitignore colocaría el nombre de los archivos de la siguiente manera para que no aparezcan: *archivo

## Ejemplo: _Como ignorar el archivo ignorado.txt_
```
  -En el repositorio local, crear un archivo llamado _.gitignore_.
  
  -Dentro del archivo, agrego la linea de texto "*ignorado.txt".
  
  -Luego, el archivo será ignorado automaticamente por git.
```
---
 

### _Punto 3_
En este punto se nos pide analizar y corregir los archivos **codigo_misterioso.c** y **codigo_sin_funcionar.c** utilizando las herramientas de **debugging** instaladas en VS Code.

### **codigo_misterioso.c 🕵🏻‍♂️**
Se nos dice de antemano:
```
Contiene código ofuscado (con nombres genéricos y poco descriptivos).
Su tarea es usar el depurador para observar elcomportamiento de las variables en memoria, deducir
qué hace lógicamente y renombrar las funciones y variables de forma adecuada.
```
- **_Correccion 1_**:
  El primer error se basa en corregir es en el nombre de la funcion **"f_alpha"**, la cual invierte el numero ingresado por parametro, renombrandola como **"invertir_numero"**. Ademas de esto se agrego un **print** que muestra por pantalla el numero invertido.
  ```
   printf("El numero invertido es: %d\n",*p); 
  ```

- **_Correccion 2_**:
  La segunda correccion fue realizada a la funcion **"f_beta"**, la cual divide en 2 el numero recibido por parametro, renombrandola como **"calcular_mitad"**. Ademas se le agrego un **print** que mustra por pantalla el calculo.
  ```
  printf("La mitad del numero es :%d\n",*p);
  ```
- **_Correccion 3_**:
  La tercera correccion se realizo a la funcion **"f_gamma"**, la cual suma los digitos del numero recibido por parametro, renombrandola como **"sumar_digitos"**. Ademas se le agregó un **print** que muestra por pantalla la suma del numero recibido por parametro y el numero obtenido de sumar sus digitos.
  ```
      printf("Iniciando depuracion con el valor: %d\n", dato_secreto);
  ```
### **codigo_sin_funcionar.c ⚠️**
Se nos dice:
```
Haga una lista detallando los errores
específicos que encontró (sintaxis, scanf, lógica de punteros) y explique
cómo los solucionó.
```
- **_Correccion 1_**:
  En primer lugar se agregó la librería faltante **stdio.h** al inicio del codigo. Sin esta librería, el codigo seria imposible de compilar.
  - 
- **_Correccion 2_**:
  - Se agregó el **"*"** a las variables **numero**, la cual entra como parametro por referencia en la funcion _duplicar_numero_. Esto con la finalidad de poder modificar el valor de la variable que "entregó" su direccion de memoria a la funcion.
  - Se agregó el **"*"** a la variable **numero** dentro de la funcion _duplicar_numero_.
  Resultado:
    ```
    void duplicar_numero(int *numero) {
                             ^
    *numero = *numero * 2;
    ^         ^
    }
    ```
- **_Correccion 3_**:
  Se agregó el "&" ala hora de declarar la variable **valor1**.
  Resultado:
  ```
  scanf("%d",&valor1);
             ^
  ```
- **_Correccion 4_**:
  Se agregó el ";" a la hora de declarar la variable **suma**.
  Resultado:
  ```
  int suma = valor1 + valor2;
                            ^
  ```
- **_Correccion 5_**:
  Se agregó el ";" en el "return 0" final.
  Resultado:
  ```
  return 0;
          ^
  ```
### _Punto 4_
## _Primera parte_
En el repositorio local se observa el archivo **tp1_1.c** y **tp1_1.exe**. Como no quiero que el segundo sea visible por git entonces guardo su nombre en el archivo **.gitignore** para luego pushear el repositorio local al remoto.
## _Segunda parte_

  En el archivo **Punteros.c** se nos pide declarar una variable, asignarle un puntero a su direccion de memoria, mostrar ambos contenidos y sus direcciones de memoria.
  Se nos dice...
  
  - _Si resolvió correctamente los apartados 2 y 3 del punto anterior notará que el resultado es el mismo. ¿a qué se debe?_
  
  ```
  2) Muestre la dirección de memoria almacenada por el puntero.
  3) Muestre la dirección de memoria de la variable.
  ```

  En respuesta, que la direccion de memoria almacenada por el puntero y que la direccion de la variable (apuntada) sean iguales se debe a que son el mismo dato en distintas variables. Una que es la original (variable apuntada) y otra que sirve como contenedor de su direccion de memoria.
  
  - _¿Qué obtiene en el punto 4? ¿Es igual a los anteriores? ¿Por qué?_

  ```
  4) Muestre la dirección de memoria del puntero.
  ```
  En el punto 4 se obtiene la **direccion de memoria** del **puntero**. La cual no es igual a las anteriores porque esta es la direccion propia del puntero, no la que tiene contenida.
  