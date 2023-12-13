Algoritmo factorizacion
	Escribir "Introduce un nùmero entero:"
	Leer num
	Si num<0 Entonces 
		Escribir "Error! El factorial de un nùmero negativo no existe"
	Sino
		factorial <- 1
		Para i<-1 Hasta num Hacer
			factorial <- factorial*i
			Escribir i, "! =", factorial
		FinPara
	FinSi
	
FinAlgoritmo
