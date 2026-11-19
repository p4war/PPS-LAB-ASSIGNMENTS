#include <stdio.h>
// Function to calculate factorial using loop
int factorial(int n)
{
 int i;
 int fact = 1; // Step 1: initialize result
 // Step 2: loop from 1 to n
 for(i = 1; i <= n; i++)
 {
 fact = fact * i; // Step 3: multiply
 }
 return fact; // Step 4: return result
}
int main()
{
 int num = 5;
 int result;
 result = factorial(num); // function call
 printf("Factorial of %d = %d\n", num, result);
 return 0;
}
