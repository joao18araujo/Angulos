#include <stdio.h>
#include <math.h>

double grausrad(double angulograus)
{
	double angulorad;
	angulorad=angulograus*3.1415926536/180;
	return angulorad;
}

int main()
{
	double angulo;
	printf("Digite o angulo (em graus): ");
	scanf("%lf", &angulo);
	printf("angulo em radianos = %f\n", grausrad(angulo));
	printf("sen = %f, cos = %f\n", sin(grausrad(angulo)), cos(grausrad(angulo)));
	printf("tg = %f\n", tan(grausrad(angulo)));
	return 0;
}
