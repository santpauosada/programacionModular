//programa para calcular una matriz de 3x3 traspuesta


#include<stdio.h>

int main()
{
        int matriz[3][3], i,j;
        for(int i=0;i<3;i++)
        {
        for(int j=0;j<3;j++)
        {

        printf("Escribe los valores de la matriz [%d][%d]= ",i+1,j+1);
        scanf("%d",&matriz[i][j]);
        }

}
        printf("\n\n\tMatriz Original");
        printf("\n\n");
        for(i=0;i<3;i++)
{
        printf("\n\t\t");
        for(j=0;j<3;j++)
{

        printf("%6d", matriz[i][j]);
        }
}
        printf("\n\n\tMatriz Traspuesta");
        printf("\n\n");
        for(int i=0;i <3;i++){
        printf("\n\t\t");
        {
        for(int j=0;j<3;j++)
        {
                printf("%6d",matriz[j][i]);
        }
        }

        }
        
return 0;
}


