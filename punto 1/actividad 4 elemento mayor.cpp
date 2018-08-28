/*
PROGRAMA: inicializar un arreglo de 10 elementos, y con un ciclo for verificar 
cual de los elementos en mayor 
FECHA: 27 de Agosto del 2018
ELABORADOR POR: Sergio Daniel Arias Rendon  
*/
#include <stdio.h>
int main (){
//arreglo declarado
	int  num[]={0, 10, 5, 8, 7, 6};
	//variables declaradas 
	int i=0, j=0;
	//inicio el arreglo 
	for(j=0; j<6; j++){
		if (num[j] > num[i]){// define que dato es mayor al anterior 
			i=j;
		}
	}
	printf ("\n El elemento mayor es el: %d", num[i]);
	return 0;
}

