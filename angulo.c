#include <stdio.h>
#include <math.h>

int main()
{
  double angulo;
  printf("Digite o angulo: ");
  scanf("%lf", &angulo);
  printf("sen = %f, cos = %f\n", sin(angulo), cos(angulo));
  return 0;
}
