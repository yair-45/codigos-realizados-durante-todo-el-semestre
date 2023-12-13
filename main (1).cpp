#include  <iostream>
/*Se incluye la librería iostream para permitir la entrada y salida de datos.*/

int main() {
    /*Inicia el proceso de ejecucion del codigo*/
    int n, i, num, pares = 0, impares = 0; 
    /*Se declaran las variables n, i, num, pares e impares como enteros y se inicializan pares e impares en 0.*/

    printf("Ingresa la cantidad de números a evaluar: "); 
    /*Se solicita al usuario que ingrese la cantidad de números a evaluar.*/
    scanf("%d", &n); 
    //*Se lee la cantidad de números ingresada por el usuario y se almacena en la variable n.*/

    for (i = 1; i <= n; i++) { 
        /*Se realiza un ciclo for desde 1 hasta n, donde i incrementa en cada iteración.*/
        printf("Ingresa el número %d: ", i); 
        /*Se solicita al usuario que ingrese el número i.*/
        scanf("%d", &num); 
        /*Se lee el número ingresado por el usuario y se almacena en la variable num.*/

        if (num % 2 == 0) { 
            /*Si el número ingresado es divisible entre 2 (par), se ejecuta el bloque de código dentro del if.*/
            pares++; 
            /*Se incrementa en 1 la variable pares.*/
            printf("%d es par\n", num); 
            /*Se imprime en pantalla que el número es par.*/
        } else {
            /*verifica si una situacion es falsa por ejemplo en este caso si es impar*/
            impares++; 
            /*Si el número ingresado no es par, se incrementa en 1 la variable impares.*/
            printf("%d es impar\n", num); 
            /*Se imprime en pantalla que el número es impar.*/
        }
    }

    printf("\nCantidad de números pares: %d\n", pares); 
    /*Se imprime en pantalla la cantidad de números pares ingresados.*/
    printf("Cantidad de números impares: %d\n", impares); 
    /*Se imprime en pantalla la cantidad de números impares ingresados.*/

    return 0; 
    /*Se devuelve un valor igual a cero y finaliza la ejecucion del programa*/
}