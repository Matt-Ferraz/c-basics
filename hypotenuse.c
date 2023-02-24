#include <stdio.h>
#include <math.h>

int main() {
  char unit[10] = "";
  float a, b, c;

  printf("\nWell, first of all, specify the unit you are using: ");
  scanf("%s", unit);

  printf("\nInsert the A side lenght: ");
  scanf("%f", &a);

  printf("\nInsert the B side lenght: ");
  scanf("%f", &b);

  c = sqrt(a * a + b * b);

  printf("\nSide c is %.2f", c);
  printf("%s", unit);

  return 0;
};