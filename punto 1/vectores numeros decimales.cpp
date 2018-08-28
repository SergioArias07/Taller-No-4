/*27/08/2018
programa: numeros impares
Elaborado por: Sergio Daniel Arias Rendon
*/


#include <stdio.h>
using namespace std;
//funcion principal
int main() {
	//declaracion de variables 
	float dec[]={1.4, 4.8, 3.9, 2.5};
	int i=0,aux;
	float suma=0;
	// ciclo for 
	for (i=0; i<4; i++){
		printf("%.1f\n", dec[i]);
		suma = suma+dec[i];
		

	}
	printf("la suma de los numeros decimales es de: %.2f", suma);
	
	return 0;
}

