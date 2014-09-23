#include <stdio.h>
#include <math.h>

double grausrad(angulograus)
{
	double angulogras, angulorad;
	angulorad=angulograus*3.1415926536/180;
	return angulorad;
}

int main()
{
	double angulo;
	printf("Digite o angulo (em graus): ");
	scanf("%lf", &angulo);
	printf("%f\n", grausrad(angulo));
	printf("sen = %f, cos = %f\n", sin(angulo), cos(angulo));
	printf("tg = %f\n", tan(angulo));
	return 0;
}
