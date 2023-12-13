Algoritmo MayorYMenor
	Definir cantidadNumeros, numero, mayor, menor como Entero
	
	mayor <- -9999  // Inicializamos el mayor con un valor bajo
	menor <- 9999   // Inicializamos el menor con un valor alto
	
	Escribir "Ingrese la cantidad de numeros: "
	Leer cantidadNumeros
	
	contador <- 1
	Mientras contador <= cantidadNumeros Hacer
		Escribir "Ingrese el numero ", contador, ": "
		Leer numero
		
		Si numero > mayor Entonces
			mayor <- numero
		FinSi
		
		Si numero < menor Entonces
			menor <- numero
		FinSi
		
		contador <- contador + 1
	FinMientras
	
	Escribir ""
	Escribir "El numero mayor es: ", mayor
	Escribir "El numero menor es: ", menor
	
FinAlgoritmo