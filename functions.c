#include <stdio.h>

void consoleOut() 
{
  printf("This is an console/print\n");
};

void printArguments(char name[], int age){
  printf("Hello %s, you're %d years old", name, age);
};

int main() 
{
  char name[] = "Mateus";
  int age = 17;

  consoleOut();
  printArguments(name, age);

  return 0;
};