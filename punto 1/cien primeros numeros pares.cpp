/*27/08/2018
programa : primeros cien numeros pares y su suma
Elaborado por: Sergio Daniel Arias Rendon
*/


#include <stdio.h>
//funcion principal
int main(int argc, char *argv[]) {
	//declaracion del arreglo
	int num[100];
	//declaracion de variables
	int i = 0, suma = 0, con = 0;
	//ciclos for 
		for(i = 1; i <= 200; i++){
			if(i % 2 == 0){
				num[con] = i;
				con ++;
			}
		}
		for(i = 0;i < con; i++){
			printf("%d \n", num[i]);
			suma = suma + num[i];
		}
		
		printf("la suma total es %d \n", suma);
		
	return 0;
}

