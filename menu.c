// Programa de menu

#include<stdio.h>
#include <stdlib.h>
#include<math.h>


#define true 1
#define false 0

int main()
{
		char repetir = true;
		int opc;

		do 
		{
		printf("\n\nMENU\n\n");
		printf("\n\n----------------------------------\n");
		printf("\n\nAREA\n\n");
	        printf("\n1.Triangulo");
                printf("\n2.Rectangulo");
                printf("\n3.Trapecio");
                printf("\n4.Cuadrado ");
                printf("\n\nCALCULAR\n\n");
                printf("\n5.Angulo");
                printf("\n6.Hipotenusa");
                printf("\n7.Salario");
                printf("\n8.Factorial");
                printf("\n\nCONVERSIONES\n\n");
                printf("\n9.Convertir de Celsius a Fahrenheit");
                printf("\n10.Convertir de Fahrenheit a Celsius");
                printf("\n11.Convertir de Kelvin a Celsius");
                printf("\n12.Convertir de Celsius a Kelvin");
                printf("\n13.Convertir de Fahrenheit a Kelvin");
                printf("\n14.Convertir de Kelvin a Fahrenheit");
                printf("\n\nMATRIZ\n\n");
                printf("\n15.Suma (2x2-10x10)");
                printf("\n16.Multiplicacion (2x2)");
                printf("\n17.Transpuesta");
		printf("\n0.SALIR\n");
                printf("\n\n----------------------------------\n");

		printf("\nIngrese una opcion: ");
		scanf("%d", &opc);

switch(opc)
{
	case 1: 
	int base, alt;
	float a;
	printf("Escribe la base: ");
	scanf("%d", &base);
	printf("Escribe la altura: ");
	scanf("%d", &alt);
	a= base*alt/2;
	printf("El area del triangulo es: %f",a);
	break;
	
	case 2:
 	int rec,b1,h1;
	printf("Escribe la base de rectangulo: ");
	scanf("%d", &b1);
	printf("Escribe la altura del rectangulo: ");
	scanf("%d", &h1);
	rec = b1*h1;
	printf("El area del rectangulo es: %d", rec);
	break;

	case 3:
 	int B1,b2,h2,trap1,trap;
	printf("La base mayor es:");
	scanf("%d", &B1);
	printf("La base menor es: ");
	scanf("%d", &b2);
	printf("Ingrese la altura:");
	scanf("%d", &h2);
	trap = B1+b2/2;
	trap1 = trap*h2;
	printf("El area del trapecio es: %d ", trap1);
	break;

	case 4:
	int lado, area;
	printf("Escribe el lado del cuadrado: ");
	scanf("%d", &lado);
	area = lado*lado;
	printf("El area del cuadrado es: %d", area);
	break;

	case 5:
	float an1,an2,an3;
	printf("Escribe el valor de los dos angulos: ");
	scanf("%f%f", &an1,&an2);
	an3 = 180-(an1+an2);
	printf("El tercer angulo mide: %f",an3);
	break;

	case 6:
	int co, ca;
	float h3;
	printf("Escribe la longitud del cateto adyacente: ");
	scanf("%d", &ca);
	printf("Escribe la longitud del cateto opuesto: ");
	scanf("%d", &co);
	h3 = sqrt(co*co+ca*ca);
	printf("La hipotenusa mide: %f",h3);
	break;

	case 7:

	float salariobono2,salariobono;
	float iva,ivares,iva2,salarioneto,salarioneto1;
	int salarioxhora,hora,salario;
	printf("Ingresa tu salario: ");
	scanf("%d", &salario);
	printf("Ingresa horas laboradas:");
	scanf("%d", &hora);
	salarioxhora = salario*hora;
	iva = salarioxhora/100*16;
	ivares = salarioxhora+iva;
	iva2 = ivares/100*12;
	salarioneto1= ivares-iva2;
	salarioneto =  salarioneto1*30;

	if(10000 < salarioneto){
	
	salariobono = salarioneto/100*5;
	salariobono2 = salarioneto + salariobono;
	printf("El salario neto es: %f MXN", salariobono2);
}

	else
{
	printf("El salario neto es: %f MNX", salarioneto);
}
	break;

	case 8:
	float factorial(int n)
{
	float f;
	if (n==0) f=1;
	else f=n*factorial(n-1);
	return f;

}
{
	int fact;
	int n;
	printf("\n Dame un numero: ");
	scanf("%d", &n);
	fact=factorial(n);
	printf("\n El factorial es=%d\n",fact);
}
	break;

	case 9:
        int  celsius1;
        float temperatura1;
        printf("Celsius: ");
        scanf("%d", &celsius1);
        temperatura1 = celsius1*1.8+32;
        printf("convertir de ºC a ºF *FAHRENHEIT* : %f", temperatura1);

	break;

	case 10:

        int  fahrenheit1;
        float temperatura3;
        printf("fahrenheit: ");
        scanf("%d", &fahrenheit1);
        temperatura3 = (fahrenheit1-32)/1.8;
        printf("convertir de ºF a ºC *CELSIUS* : %f", temperatura3);

	break;

	case 11:
        int kelvin;
        float temperatura5;
        printf("Kelvin: ");
        scanf("%d", &kelvin);
        temperatura5 = kelvin-273.15;
        printf("convertir de ºK a ºC *CELSIUS* : %f", temperatura5);

	break;

	case 12:
        int  celsius2;
        float temperatura2;
        printf("Celsius: ");
        scanf("%d", &celsius2);
        temperatura2 = celsius2+273.15;
        printf("convertir de ºC a ºK *KELVIN* : %f", temperatura2);

	break;

	case 13:
        int fahrenheit2;
        float temperatura4;
        printf("fahrenheit: ");
        scanf("%d", &fahrenheit2);
        temperatura4 = 0.05*(fahrenheit2-32)+273.15;
        printf("convertir de ºF a ºK *KELVIN* : %f", temperatura4);

        break;

	case 14:
        int kelvin2;
        float temperatura6;
        printf("Kelvin: ");
        scanf("%d", &kelvin2);
        temperatura6 = 1.8*(kelvin2-273.15)+32;
        printf("convertir de ºK a ºF *FAHRENHEIT*: %f", temperatura6);

        break;

	case 15:
	
        int i,j,fil,col;
        int Ama[10][10],Bma[10][10];
	int Cma[10][10];
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
       	scanf("%d", &Ama[i][j]);
	}
}
	printf("Introduca los datos de la Matriz B:\n");
	for(i=1;i<=fil;i++)
	{
	for(j=1;j<=col;j++)
	{
	printf("\nIntroduzca la coordenada (%i,%i): ",i,j);
       	scanf("%d", &Bma[i][j]);
	}
}
	for(i=1;i<=fil;i++)
	{
	for(j=1;j<=col;j++)
	Cma[i][j]= Ama[i][j] + Bma[i][j]; 
}

	printf("\n\n Resultado es:");
	printf("\n\n");
	for(i=1;i<=fil;i++){
	printf("\n\n");
	{
	printf("\n\t\t");
	{
	for(j=1;j<=col;j++)
	printf("%6d",Cma[i][j]);
	}
   }
}
		
	break;



	case 16:
	{

        int a[2][2],b[2][2],c[2][2],k,ix,jy;
         printf("Primera matriz");
        for(int ix=0;ix<2;ix++){
        for(int jy=0;jy<2;jy++){
        printf("\nIntroduce los valores de la  matriz %d,%d: ",ix,jy);
        scanf("%d",&a[ix][jy]);
        }
}
        printf("\nSegunda matriz");
        for(int ix=0;ix<2;ix++){
        for(int jy=0;jy<2;jy++){
        printf("\nIntroduce los valores de la  matriz %d,%d: ",ix,jy);
        scanf("%d",&b[ix][jy]);
        }

}
        for(int ix=0;ix<2;ix++){
        for(int jy=0;jy<2;jy++){
// cada posicion de la matriz c, se inicia en 0, para que en la primera mult sume 0 y la primera multiplicacion
        c[ix][jy]=0;
        for(k=0;k<2;k++){
        c[ix][jy]=c[ix][jy]+a[ix][k]*b[k][jy];
}
}
}
        printf("La multiplicacion es: ");
        printf("\n\n");
        for(int ix=0;ix<2;ix++){
        printf("\n\n");
        {
        printf("\n\t\t");
        {
        for(int jy=0;jy<2;jy++)
        printf("%6d",c[ix][jy]);

}
}
}
}


        break;

	case 17:
        {
        int matriz[3][3], x,y;
        for(int x=0;x<3;x++)
        {
        for(int y=0;y<3;y++)
        {

        printf("Escribe los valores de la matriz [%d][%d]= ",x+1,y+1);
        scanf("%d",&matriz[x][y]);
        }

}
        printf("\n\n\tMatriz Original");
        printf("\n\n");
        for(x=0;x<3;x++)
{
        printf("\n\t\t");
        for(y=0;y<3;y++)
{

        printf("%6d", matriz[x][y]);
        }
}
        printf("\n\n\tMatriz Traspuesta");
        printf("\n\n");
        for(int x=0;x <3;x++){
        printf("\n\t\t");
        {
        for(int y=0;y<3;y++)
        {
                printf("%6d",matriz[y][x]);
        }
        }

        }
}

        break;
	
	case 0:
	 repetir = false;
	 break;
 	}
} while(repetir);

return 0; 
}
