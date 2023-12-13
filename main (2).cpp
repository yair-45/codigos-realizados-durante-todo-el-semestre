#include <iostream>
/*Se incluye la librería iostream para permitir la entrada y salida de datos.*/

int main() {
    /*inicia la ejecucion del codigo*/
    int n, num, mayor, menor; 
    /*Se declaran las variables n, num, mayor y menor como enteros.*/

    std::cout << "Ingresa la cantidad de números a evaluar: ";
    /*Solicita al usuario la cantidad de números a evaluar*/
    std::cin >> n; 
    /*Se lee la cantidad de números ingresada por el usuario y se almacena en la variable n.*/

    std::cout << "Ingresa el número 1: ";
    /*Solicita al usuario el primer número*/
    std::cin >> num; 
    /*Se lee el primer número ingresado por el usuario y se almacena en la variable num.*/

    /*Inicializa las variables mayor y menor con el primer número ingresado*/
    mayor = num;
    menor = num;

    /* Verifica cada número ingresado por el usuario*/
    for (int i = 2; i <= n; i++) {
        std::cout << "Ingresa el número " << i << ": ";
        /*solicita otro numero en pantalla*/
        std::cin >> num; 
        /*Se lee cada número ingresado por el usuario y se almacena en la variable num.*/

        /*Verifica si el número es mayor o menor que los anteriores*/
        if (num > mayor) {
            mayor = num;
            /*Si el número es mayor que el valor almacenado en la variable mayor, se actualiza mayor.*/
        } else if (num < menor) {
            /*Verifica si el numero es menor*/
            menor = num; 
            /*Si el número es menor que el valor almacenado en la variable menor, se actualiza menor.*/
        }
    }

    /* Imprime en pantalla el número mayor y el número menor*/
    std::cout << "El número mayor es: " << mayor << std::endl;
    std::cout << "El número menor es: " << menor << std::endl;

    return 0; 
    /*Devuelve un valor igual a cero y finaliza la ejecucion del codigo*/
}