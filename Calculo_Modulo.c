
#include <stdio.h>
#include <math.h>

float calculo_modulo(int valor_x, int valor_y, int valor_z);

int main()
{
	float modulo;
	float eje_x, eje_y, eje_z;
	printf("\nBienvenido a mi programa...\n");
	printf("Puedo calcular el modulo de un vector en 3 dimensiones\n");
	printf("Ingrese el valor del EJE X\n>>> ");
	scanf("%f", &eje_x);
	printf("Ingrese el valor del EJE Y\n>>> ");
	scanf("%f", &eje_y);
	printf("Ingrese el valor del EJE Z\n>>> ");
	scanf("%f", &eje_z);
	modulo = calculo_modulo(eje_x, eje_y, eje_z);
	printf("El modulo del vector es: %.3f\n\n", modulo);
	return 0;
}

float calculo_modulo(int valor_x, int valor_y, int valor_z)
{
	float x2, y2, z2, suma, resultado;
	if ((valor_x != 0) && (valor_y == 0) && (valor_z == 0)) printf("Es un versor del EJE X\n");
	if ((valor_x == 0) && (valor_y != 0) && (valor_z == 0)) printf("Es un versor del EJE Y\n");
	if ((valor_x == 0) && (valor_y == 0) && (valor_z != 0)) printf("Es un versor del EJE Z\n");
	x2 = pow(valor_x, 2);
	y2 = pow(valor_y, 2);
	z2 = pow(valor_z, 2);
	suma = x2 + y2 + z2;
	resultado = sqrt(suma);
	return (resultado);
}
