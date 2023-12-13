#include <iostream>
/*Se incluye la librería iostream para permitir la entrada y salida de datos.*/

int main() {
    /*inicia la ejecucion del codigo*/
    int n, num; 
    /*Se declaran las variables n y num como enteros.*/

    std::cout << "Ingresa la cantidad de números a evaluar: ";
    /*Solicita al usuario la cantidad de números a evaluar*/
    std::cin >> n; 
    /*Se lee la cantidad de números ingresada por el usuario y se almacena en la variable n.*/

    /*Verifica cada número ingresado por el usuario*/
    for (int i = 1; i <= n; i++) {
        std::cout << "Ingresa el número " << i << ": ";
        std::cin >> num; 
        /*Se lee cada número ingresado por el usuario y se almacena en la variable num.*/

        /*Verifica si el número es positivo, negativo o cero*/
        if (num > 0) {
            std::cout << num << " es positivo" << std::endl; 
            /*Si el número es mayor que 0, se muestra que es positivo.*/
        } else if (num < 0) {
            std::cout << num << " es negativo" << std::endl; 
            /*Si el número es menor que 0, se muestra que es negativo.*/
        } else {
            /*Verifica si el numero inglesado es negativo*/
            std::cout << num << " es cero" << std::endl; 
            /*Si el número es igual a 0, se muestra que es cero.*/
        }
    }

    return 0;
    /*Devuelve un valor igual a cero y finaliza la ejecucion del codigo*/
}