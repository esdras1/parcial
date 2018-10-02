#include <stdio.h>

int valor;
int tam=2;
int aux;
int valor1=0, valor2=0;

int main (void){
	
	int A[tam][tam];
	int B[tam][tam];
	
	//se llena la matriz A
	printf("ingrese los valores de la matriz, A\n");
	for (int i=0;i<tam;i++){
		for(int j=0;j<tam;j++){
			printf("valor en la posicion__%d-%d", i,j );
			scanf("%d",&valor);
			
			A[i][j]=valor;
			}
		} 
		
	//se llena la matriz B
	printf("ingrese los valores de la matriz, B\n");
	for (int i=0;i<tam;i++){
		for(int j=0;j<tam;j++){
			printf("valor en la posicion__%d-%d", i,j );
			scanf("%d",&valor);
			
			B[i][j]=valor;
			}
		} 
		
		//se ordenan los valores
		for (int i=0;i<tam-1;i++){
		for(int j=0;j<tam-1;j++){
			if(A[i][j]>A[i+1][j+1]){
			aux=A[i+1][j+1];
			A[i+1][j+1]=A[i][j];
			A[i][j]=aux;
			
		}
		}}
		
		//se ordenan los valores
		
		for(int n=0;n<tam;n++){
			
		for (int i=0;i<tam-1;i++){
		for(int j=0;j<tam-1;j++){
			valor1=B[i][j];
			valor2=B[i+1][j+1];
			
			if(valor1<valor2){
			
		
	}else{aux=B[i+1][j+1];
			B[i+1][j+1]=B[i][j];
			B[i][j]=aux;}
	}
	
	}
	n++;
	}
	//imprime las matris para ver el orden en q estam
	for (int i=0;i<tam;i++){
		for(int j=0;j<tam;j++){
			printf("%d",B[i][j]);
			}}
		
	
	//se imprime los valores ordenados
	
	printf("ba comenxar a imprimir ordenado");
	for (int i=0;i<tam;i++){
		for(int j=0;j<tam;j++){
			valor1=A[i][j];
			valor2=B[i][j];
			
			if(valor1<valor2){
				printf("%d",valor1);
				printf("%d",valor2);
			}
			else{
				printf("%d",valor2);
			printf("%d",valor1);
			
		}
		}}
	}

