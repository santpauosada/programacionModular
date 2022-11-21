//programa para calcular el area de un cuadrado
// rectangulo y trapecio 


#include<stdio.h>
#include<math.h>

void cuadrado()
{
 
	int lado, area;
	printf("Escribe el lado del cuadrado: ");
	scanf("%d", &lado);
	area = lado*lado;
	printf("El area del cuadrado es: %d", area);
}

void rectangulo()
{
 	int rec,b,h;
	printf("Escribe la base de rectangulo: ");
	scanf("%d", &b);
	printf("Escribe la altura del rectangulo: ");
	scanf("%d", &h);
	rec = b*h;
	printf("El area del rectangulo es: %d", rec);
}

void trapecio()
{
 	int B,b,h,trap1,trap;
	printf("La base mayor es:");
	scanf("%d", &B);
	printf("La base menor es: ");
	scanf("%d", &b);
	printf("Ingrese la altura:");
	scanf("%d", &h);
	trap = B+b/2;
	trap1 = trap*h;
	printf("El area del trapecio es: %d ", trap1);

}

int main()
{
	char opc;
	printf("\na) Cuadrado");
	printf("\nb) Rectangulo");
	printf("\nc) Trapecio");
	printf("\nElige una opcion: ");
	scanf("%c", &opc);

switch(opc)
{
	case 'a' :cuadrado();
		  break;

	case 'b' :rectangulo();
		   break;

	case 'c' :trapecio();
		  break;
}
 	return 0;
}

