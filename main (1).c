/* Programa: Suma y multiplicación de dos números */

#include <conio.h>
/* Es el encabezado de una biblioteca no estandar en lenguaje c que incluye funciones especificas para el control de entrada y salida por consola de una plataforma */
#include <stdio.h>
/* Indica al compilador que incluya otro archivo */

int main()
/* Es el punto de partida para la ejecución del programa */
{
	int n1, n2, producto, suma;
	/* Suma y multiplicación de numeros enteros */
	printf( "\n Introduzca primer numero (entero): " );
	/* Solicita el primer digito */
	scanf( "%d", &n1 );
	/* Guarda y lee el primer digito */
	printf( "\n Introduzca segundo numero (entero): ");
	/* Solicita el segundo digito */
	scanf( "%d", &n2 );
	/* Guarda y lee el segundo digito */
	
	suma = n1 + n2;
	/* Suma los dos digitos solicitados */
	producto = n1 * n2;
	/* Multiplica los dos digitos solicitados */
	printf( "\n La suma es: %d", suma );
	/* Muestra el resultado en pantalla de la suma de los dos digitos */
	printf( "\n\n La multiplicaci%cn es: %d", 162, producto );
	/* Muestra el resultado en pantalla de la multiplicación de los dos digitos */
	
	getch(); /* Pausa */
	/* Lectura de un caracter desde el teclado */
	return 0;
	/* Punto de terminación de la ejecución del programa */
}