//programa para calcular el area de un cuadrado

#include<stdio.h>
#include<math.h>

int main(){
 
	int lado, area;
	printf("Escribe el lado del cuadrado: ");
	scanf("%d", &lado);
	area = lado*lado;
	printf("El area del cuadrado es: %d", area);
	return 0;  
}
