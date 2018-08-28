/*
PROGRAMA: Realizar un prgrama que pida 5 calificaciones por teclado, 
los muestre y calcule el promedio de ellos 
FECHA: 27 de Agosto del 2018
ELABORADOR POR: Sergio Daniel Arias Rendon  
*/
#include <stdio.h>
using namespace std;

//Funcion Principal
int main() {
	float cali[5];
	float prom=0;
	// iniciar el  arreglo para intoducir los datos 
	for (int i=0; i<5; i++){
		printf ("ingrese las notas para sacar su promedio, nota %d: ", i+1);
		scanf("%f", &cali[i]);
		prom+=cali[i];
		printf("\n");
	}
	printf ("las notas ingresadas son: %.2f \n");
	for(int i=0; i<5; i++){
		printf("%.2f\n", cali[i]);
	}
	printf ("El promedio de notas es %.2f:", prom/5);
	
	return 0;
}

