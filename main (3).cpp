#include <stdio.h>
/*Incluye la biblioteca estándar de entrada y salida en C, que contiene funciones como printf y scanf*/

int main() {
/*Define la función principal del programa, que es el punto de entrada para la ejecución del programa*/
    int cantidadNumeros;
    /*Declara una variable llamada `cantidadNumeros` de tipo entero."*/
    int numero;
    /*Declara una variable llamada `numero` de tipo entero.*/
    int mayor = -9999; // Inicializamos el mayor con un valor bajo
    /*Declara una variable llamada `mayor` e inicializa su valor en -9999. Esta variable se utilizará para almacenar el número mayor ingresado.*/
    int menor = 9999; // Inicializamos el menor con un valor alto
    /*Declara una variable llamada `menor` e inicializa su valor en 9999. Esta variable se utilizará para almacenar el número menor ingresado.*/
    
    printf("Ingrese la cantidad de numeros: ");
    /* Imprime en la consola el mensaje "Ingrese la cantidad de números: ".*/
    scanf("%d", &cantidadNumeros);
    /*Lee un número entero ingresado por el usuario y lo asigna a la variable `cantidadNumeros`.*/
    
    int contador = 1;
    /*Declara una variable llamada `contador` e inicializa su valor en 1. Esta variable se utilizará para contar la cantidad de números ingresados hasta el momento*/
    while (contador <= cantidadNumeros) {
    /*Inicia un bucle while que se ejecutará mientras el valor de `contador` sea menor o igual a `cantidadNumeros`.*/
        printf("Ingrese el numero %d: ", contador);
        /*Imprime en la consola el mensaje "Ingrese el número X: " donde X es el valor de `contador`*/
        scanf("%d", &numero);
        /*Lee un número entero ingresado por el usuario y lo asigna a la variable `numero`.*/
        
        if (numero > mayor) {
        /* Verifica si el valor de `numero` es mayor que el valor actual de `mayor`.*/
            mayor = numero;
        }
        /*Si `numero` es mayor que `mayor`, actualiza el valor de `mayor` con el valor de `numero`.*/
        
        if (numero < menor) {
        /*Verifica si el valor de `numero` es menor que el valor actual de `menor`.*/
            menor = numero;
        }
        /*Si `numero` es menor que `menor`, actualiza el valor de `menor` con el valor de `numero`.*/
        
        contador++;
    }
    /* Incrementa el valor de `contador` en 1.*/
    
    printf("\nEl numero mayor es: %d\n", mayor);
    /*Imprime en la consola el mensaje "El número mayor es: " seguido del valor de `mayor`.*/
    printf("El numero menor es: %d\n", menor);
    /*Imprime en la consola el mensaje "El número menor es: " seguido del valor de `menor`.*/
    
    return 0;
}
/* Indica que el programa ha finalizado sin errores y devuelve el valor 0 al sistema operativo.*/