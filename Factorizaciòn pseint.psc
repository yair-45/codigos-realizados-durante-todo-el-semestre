Algoritmo factorizacion
	Escribir "Introduce un n�mero entero:"
	Leer num
	Si num<0 Entonces 
		Escribir "Error! El factorial de un n�mero negativo no existe"
	Sino
		factorial <- 1
		Para i<-1 Hasta num Hacer
			factorial <- factorial*i
			Escribir i, "! =", factorial
		FinPara
	FinSi
	
FinAlgoritmo
