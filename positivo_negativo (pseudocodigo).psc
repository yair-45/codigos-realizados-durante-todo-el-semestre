Algoritmo positivo_negativo
	num <- 1
	MIENTRAS num <> 0 HACER
		ESCRIBIR "Ingresa un número: "
		LEER num
		SI num > 0 ENTONCES
			ESCRIBIR "El número ", num, " es positivo"
		SINO
			ESCRIBIR "El número ", num, " es negativo"
		FIN SI
		ESCRIBIR "Ingresa otro número (o ingresa 0 para salir): "
	FIN MIENTRAS
FinAlgoritmo