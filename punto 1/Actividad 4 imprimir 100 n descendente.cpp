/*
PROGRAMA: Gnerar un arreglo que imprima los primeros 100 
números enteros en orden descendente 
FECHA: 23 de Agosto del 2018
ELABORADO POR: Sergio Daniel Arias Rendon
*/

#include <stdio.h>
using namespace std;
//Funcion principal
int main() {
	//Variables declaradas 
	int num[100];
	
	int i=0;
	
	("los Numeros del 1 al 100 en forma descendente son: ");
	//ciclo for para generar los numeros en dorma descendente 
	
	
	for(int i=0;i<=99;i++){
		num[i]= i+1;
	}
		for(int i=99;i>=0;i--){
		printf ("%d\n", num[i]);
	
	}
	
	return 0;
}

