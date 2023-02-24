#include <stdio.h>
#include <math.h>

int main() {
  const double PI = 3.14159;
  float radius, circumference, area;

  printf("Insert the radius of the circle (in meters): ");
  scanf("%f", &radius);

  circumference = 2 * PI * radius;
  area = PI * pow(radius, 2);

  printf("\nThe circumference of the circle is %.2f meters!", circumference);
  printf("\nThe area of the circle is %.2f meters", area);
  
  return 0;
};