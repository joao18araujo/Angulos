#include <stdio.h>
#include <math.h>

int main()
{
  double angulo;
  printf("Digite o angulo: ");
  scanf("%lf", &angulo);
  printf("sen = %f, cos = %f\n", sin(angulo), cos(angulo));
  printf("tg = %f\n", tan(angulo));
  return 0;
}
