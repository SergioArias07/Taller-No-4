/*
PROGRAMA:Que lea 5 numeros por teclado, los copie a otro array 
multiplicados por 2 y los muestre todos ordenados usando un 3 array
FECHA: 27 de agosto del 2018
ELABORADO POR: Sergio Daniel Arias Rendon
*/
#include <stdio.h>
using namespace std;
// funcion principal
int main() {
	//variables declaradas 
	int num[5], num2[5], num3[10];
	int i=0, aux;
	// ciclos for para hacer su determinada multiplicacion e imprimirlos todos 
	for(i=0; i<5; i++){
		printf ("ingrese el numero");
		scanf ("%d", &num[i]);
	}
	for(i=0; i<5;i++){
		num2[i]=(num[i]*2);
		printf("%d\n", num2[i]);
	}
	for(i=0; i<5; i++){
		num3[i]=num[i];
		
	}
	for(i=0; i<5;i++){
		num3[5+i]=num2[i];
		
	}
	for(i=0;i<10;i++){
		if(num3[i]>num3[i+1]){
			aux=num3[i];
			

			printf("%d\n",num3[i]);
			
		}
		
	printf ("%d\n", num3[i]);
	}
	return 0;
}

