#include <stdio.h>

// ################################################################
// #### ARGUMENTS
// ################################################################

// void consoleOut() 
// {
//   printf("This is an console/print\n");
// };

// void printArguments(char name[], int age){
//   printf("Hello %s, you're %d years old", name, age);
// };

// int main() 
// {
//   char name[] = "Mateus";
//   int age = 17;

//   consoleOut();
//   printArguments(name, age);

//   return 0;
// };

// ################################################################
// #### RETURNS STATEMENTS
// ################################################################

// double square(double x) 
// {
//   return x * x;
// };

// int main()
// {
//   double x = square(3.14);
//   printf("%lf", x);
//   return 0;
// };

// ################################################################
// #### FUNCTIONS PROTOTYPE
// ################################################################

void hello(char[], int);

int main()
{
  char name[] = "Mateus";
  int age = 17;
  hello(name, age);
  return 0;
};

void hello(char name[], int age)
{
  printf("Hello %s\n", name);
  printf("You are now %d years old", age);
};