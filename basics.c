#include <stdio.h>
#include <string.h>
/*
  ######################################################
  # HELLO WORLD!!
  ######################################################
*/

/*
int main() {
  printf("Hello, world!\n");
  printf("1\t2\t3\n4\t5\t6\n7\t8\t9");
  printf("\"I like pizza\" - mateus");
  return 0;
};
*/

/*
  ######################################################
  # VARIABLES!!
  ######################################################
*/


// int main() {
//   int i; // declaration of variable.
//   i = 0; // initialization of variable
//   int j = 1; // both initialization and declaration of variable

//   /*
//     BASIC DATA TYPES
//     you need to specify the data type of the variable
//   */

//   const float PI = 3.14159;
//   int integer = 0;        // integer
//   float price = 9.99;     // contains a decimal portion
//   char vowel = 'A';       // a single character
//   char name[] = "Mateus"; // array of characters

//   printf("Hello %s, nice to meet you!\n", name);         // %s is the specifier type for string
//   printf("Your macchiato will be %.2f\n", price);          // %f is the float specifier
//   printf("Sir, you did ordered %d coffes!\n", integer);  // %d is the integer specifier
//   printf("The first vowel in your name is %c\n", vowel); // %c is the character specifier
// };


/*
  ######################################################
  # ARITHMETIC!!
  ######################################################
*/

// int main() {
//   int x = 5;
//   int y = 2;

//   // printf("%s", products[0]);

//   // int prices[10] = {};

//   // double z = x / (float)y; // double is a 8byte more precise representation of a float

//   // printf("%.2f", z);

//   return 0;
// };

/*
  ######################################################
  # USER INPUT!!
  ######################################################
*/

// int main () {
//   int age;
//   char name[25];

//   printf("\nWhat is your name? ");
//   // scanf("%s", &name);
//   fgets(name, 25, stdin);
//   printf("\nHow old are you? ");
//   scanf("%d", &age);

//   printf("Hello, %s", name);
//   printf(", you're %d years old", age);
//   return 0;
// };

/*
  ######################################################
  # AMOUNT OF DAYS ON EACH MONTH!!
  ######################################################
*/

// int main() {
//   int mes;

//   printf("Choose a month:\n");
//   printf("============================\n");
//   printf("|   1    |  January        |\n");
//   printf("|   2    |  February       |\n");
//   printf("|   3    |  March          |\n");
//   printf("|   4    |  April          |\n");
//   printf("|   5    |  May            |\n");
//   printf("|   6    |  June           |\n");
//   printf("|   7    |  July           |\n");
//   printf("|   8    |  August         |\n");
//   printf("|   9    |  September      |\n");
//   printf("|   10   |  October        |\n");
//   printf("|   11   |  November       |\n");
//   printf("|   12   |  December       |\n");
//   printf("============================\n");
//   scanf("%d",&mes);

//   char* array[] = {
//       "This month have 31 days",
//       "This month have 28 days",
//       "This month have 31 days",
//       "This month have 30 days",
//       "This month have 31 days",
//       "This month have 30 days",
//       "This month have 31 days",
//       "This month have 30 days",
//       "This month have 31 days",
//       "This month have 30 days",
//       "This month have 31 days",
//       "This month have 30 days",
//   };

//   printf("%s", array[mes - 1]);
// };

/*
  ######################################################
  # MATH FUNCTIONS!!
  ######################################################
*/

// #include <math.h>
// #include <stdlib.h>

// int main() {
//   int i, j, n, k, x;
//   i = 9;
//   j = 12;
//   n = 2;
//   k = 4;
//   x = 30;

//   const float PI = 3.1415;

//   double squareRoot = sqrt(i); // returns the square root of the first argument
//   double power = pow(k, n);    // first parameter is the base of the power, second is the exponent of the power
//   int rounded = round(PI);     // retruns the rounded result of a floating point
//   int ceiled = ceil(PI);       // rounds up the floating point number to the next integer
//   int floored = floor(PI);     // rounds down the floating point number to the previous integer
//   double absolute = abs(-k);   // returns the absolute value of the negative (or positive) number, the distance from the 0
//   double logarithm = log(k);   // returns the logarithm of the argument
  

//   // square root print
//   printf("The square root of %d is ", i);
//   printf("%.2lf", squareRoot);

//   // power prints
//   printf("\nThe power of %d ", k);
//   printf("to the power of %d is ", n);
//   printf("%.2lf", power);

//   // round prints
//   printf("\nThe \"round\" of %.4f (π) is ", PI);
//   printf("%d", rounded);

//   // ceil prints
//   printf("\nThe \"ceil\" function of %.4f is ", PI);
//   printf("%d", ceiled);

//   // floor prints
//   printf("\nThe \"floor\" function of %.4f is ", PI);
//   printf("%d", floored);

//   // fabs prints
//   printf("\nThe \"fabs\" function of -%d is ", k);
//   printf("%.2lf", absolute);

//   // log prints
//   printf("\nThe \"log\" function of -%d is ", k);
//   printf("%.2lf", logarithm);

//   return 0;
// };

/*
  ######################################################
  # IF ELSE STATEMENTS!!
  ######################################################
*/

int main(){
  char name[20];
  int age;

  printf("Hello, what is your name? ");
  scanf("%s", name);

  printf("\nWhat is your age? ");
  scanf("%d", &age);

  if(age >= 18) {
    printf("\nGreat %s, you can drink a beer with me", name);
  } else if (age < 18 && age >= 0) {
    printf("\nOops %s, you cant drink a beer with", name);
  } else {
    printf("%s, you didnt even have born yet", name);
  };

  return 0;
};