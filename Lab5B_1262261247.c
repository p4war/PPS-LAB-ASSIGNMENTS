#include <stdio.h>
#include <string.h>
int main()
{
char model1[50],model2[50];
printf("Enter First machine model: ");
scanf("%s",model1);
printf("Enter Second Machine Model: ");
scanf("%s",model2);
if (strcmp(model1, model2) ==0)
printf("Both Machine Models are the same.\n");
else
printf("Machine Models are different.\n");
return 0;
}
