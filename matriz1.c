//programa para la matriiz
//suma de la matriz 

#include <stdio.h>


int main(void)
{
	int t=10;
        int i,j,fil,col;
        int A[t][t],B[t][t];
	int C[t][t];
	printf("Programa que suma matrices\n\n");
	printf("Introduzca el tamano de las matrices\n\n");
	printf("Introduzca Filas:");
       	scanf("%d", &fil);
	printf("Introduzca Columnas: ");
       	scanf("%d", &col);
	printf("Introduca los datos de la Matriz A:\n");
	for(i=1;i<=fil;i++)
	{
	for(j=1;j<=col;j++)
	{
	printf("\nIntroduzca la coordenada (%d,%d): ",i,j);
       	scanf("%d", &A[i][j]);
	}
}

	printf("Introduca los datos de la Matriz B:\n");
	for(i=1;i<=fil;i++)
	{
	for(j=1;j<=col;j++)
	{
	printf("\nIntroduzca la coordenada (%i,%i): ",i,j);
       	scanf("%d", &B[i][j]);
	}
}

	for(i=1;i<=fil;i++)
	{
	for(j=1;j<=col;j++)
	C[i][j]= A[i][j] + B[i][j]; 
}

	printf("\n\n Resultado es:");
	printf("\n\n");
	for(i=1;i<=fil;i++){
	printf("\n\n");
	{
	printf("\n\t\t");
	{
	for(j=1;j<=col;j++)
	printf("%6d",C[i][j]);
	}
	}
}
return 0;
}
