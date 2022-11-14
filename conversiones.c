//programa para relaizar conversiones de KELVIN, FAHRENHEIT, CELSIUS
//CONVERSIONES DE TEMPERATURA   

#include<stdio.h>
#include<math.h>


//convertir de ºC a ºF

void cf()
{
        int  celsius1;
        float temperatura1;
        printf("Celsius: ");
        scanf("%d", &celsius1);
        temperatura1 = celsius1*1.8+32;
        printf("convertir de ºC a ºF *FAHRENHEIT* : %f", temperatura1);
}

//convertir de ºC a ºK
void ck()
{
        int  celsius2;
        float temperatura2;
        printf("Celsius: ");
        scanf("%d", &celsius2);
        temperatura2 = celsius2+273.15;
        printf("convertir de ºC a ºK *KELVIN* : %f", temperatura2);
}
//convertir de ºF a ºC
void fc()
{
        int  fahrenheit1;
        float temperatura3;
        printf("fahrenheit: ");
        scanf("%d", &fahrenheit1);
        temperatura3 = (fahrenheit1-32)/1.8;
        printf("convertir de ºF a ºC *CELSIUS* : %f", temperatura3);
}
//convertir de ºF a ºK
void fk()
{
        int fahrenheit2;
        float temperatura4;
        printf("fahrenheit: ");
        scanf("%d", &fahrenheit2);
        temperatura4 = 0.05*(fahrenheit2-32)+273.15;
        printf("convertir de ºF a ºK *KELVIN* : %f", temperatura4);
}

//convertir de ºK a ºC
void kc()
{
        int kelvin;
        float temperatura5;
        printf("Kelvin: ");
        scanf("%d", &kelvin);
        temperatura5 = kelvin-273.15;
        printf("convertir de ºK a ºC *CELSIUS* : %f", temperatura5);
}
//convertir de ºK a ºF 
void kf()
{
        int kelvin2;
        float temperatura6;
        printf("Kelvin: ");
        scanf("%d", &kelvin2);
        temperatura6 = 1.8*(kelvin2-273.15)+32;
        printf("convertir de ºK a ºF *FAHRENHEIT*: %f", temperatura6);
}

int main()
{
        char opc;
        printf("a)convertir de ºC a ºF :   \n");
        printf("b)convertir de ºC a ºK :   \n");
        printf("c)convertir de ºF a ºC :  \n");
        printf("d)convertir de ºF a ºK :  \n");
        printf("e)convertir de ºK a ºC :  \n");
        printf("f)convertir de ºK a ºF :  \n");
        printf("Elige una opcion \n");
        scanf("%c", &opc);

switch(opc)
 {
         case 'a': cf();
                   break;
         case 'b': ck();
                   break;
         case 'c': fc();
                   break;
         case 'd': fk();
                   break;
         case 'e': kc();
                   break;
         case 'f': kf();
                   break;
}
        return 0;
        }


