//Calculo de salario neto a partir de las horas laboradas el costo por 
//hora y la tasa de IVA agregando del 16% sobre el salario y 12% de 
//IVA retenido. si el salario neto es menor a $10,000 MXN agregar el 
//un bono del 5%.

#include<stdio.h>
#include<math.h>

int main(){

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

return 0;
}
