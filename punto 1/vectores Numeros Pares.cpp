/*27/08/2018
programa: numeros pares
presentado por: Sergio Daniel Arias Rendon 
*/



#include <stdio.h>
using namespace std;
//funcion principal
int main() {
	//declaracion del arreglo
	int num[10];
	//declaracion de variables
	int i=0;
	printf("Ingrese 10 numeros para saber si es par o impar\n");
	//ciclos for
	for (i=0; i<10; i++){
		printf("Ingrese un numero: ");
		scanf("%d", &num[i]);
		if (num[i]%2==0){
			printf("El numero %d es PAR\n  ",num[i]);
		}
	}
	return 0;
}

