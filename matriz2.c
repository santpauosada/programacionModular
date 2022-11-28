//programcion para multiplicacion de matrices 2x2

#include <stdio.h>

int main()
{

        int a[2][2],b[2][2],c[2][2],k,i,j;
	 printf("Primera matriz");
	for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
 	printf("\nIntroduce los valores de la  matriz %d,%d: ",i,j);
	scanf("%d",&a[i][j]);
	}
}
        printf("\nSegunda matriz");
        for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
	printf("\nIntroduce los valores de la  matriz %d,%d: ",i,j);
        scanf("%d",&b[i][j]);
        }

}
        for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
// cada posicion de la matriz c, se inicia en 0, para que en la primera mult sume 0 y la primera multiplicacion
	c[i][j]=0;
        for(k=0;k<2;k++){
	c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
}
	printf("La multiplicacion es: ");
	printf("\n\n");
        for(int i=0;i<2;i++){
	printf("\n\n");
	{
	printf("\n\t\t");
	{
        for(int j=0;j<2;j++)
        printf("%6d",c[i][j]);
       
}
}
}

return 0;
}
