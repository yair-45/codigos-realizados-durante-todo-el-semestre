Algoritmo positivo_negativo
	num <- 1
	MIENTRAS num <> 0 HACER
		ESCRIBIR "Ingresa un n�mero: "
		LEER num
		SI num > 0 ENTONCES
			ESCRIBIR "El n�mero ", num, " es positivo"
		SINO
			ESCRIBIR "El n�mero ", num, " es negativo"
		FIN SI
		ESCRIBIR "Ingresa otro n�mero (o ingresa 0 para salir): "
	FIN MIENTRAS
FinAlgoritmo