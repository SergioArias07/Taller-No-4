/*27/08/2018
programa: numeros impares
presentado por: Sergio Daniel Arias Rendon

*/




#include <stdio.h>
using namespace std;
//funcion principal
int main() {
	//declaracion del arreglo
	int num[20];
	//declaracion de variables
	int i=0;
	printf("Ingrese 20 numeros para saber si es par o impar\n");
	//ciclos for
	for (i=0; i<20; i++){
		printf("Ingrese un numero: ");
		scanf("%d", &num[i]);
		if (num[i]%2==1){
			printf("El numero %d es IMPAR\n ",num[i]);
		}
	}
	return 0;
}
