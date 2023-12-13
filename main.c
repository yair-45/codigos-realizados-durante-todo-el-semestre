#include <stdio.h>

unsigned long long CalcularFactorial(int num) {
    unsigned long long factorial = 1;

    if (num < 0) {
        printf("Error, por favor introduce otro número.\n");
    } else {
        int x = 1;
        while (x <= num) {
            factorial *= (unsigned long long)x;
            printf("%d = %llu\n", x, factorial);
            x++;
        }
    }

    return factorial;
}

int main() {
    int numero;
    
    printf("Introduce un número entero: ");
    scanf("%d", &numero);

    unsigned long long resultado = CalcularFactorial(numero);

    printf("El factorial de %d es: %llu\n", numero, resultado);

    // Esperar a que el usuario presione una tecla antes de cerrar la aplicación
    getchar();
    return 0;
}