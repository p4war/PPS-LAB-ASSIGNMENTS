#include <stdio.h>
struct Component
{
int id;
float weight;
char material[30];
};
int main()
{
struct Component c[5];
int i;
printf("Enter Details of 5 Mechanical Components: \n");
for (i=0; i<5; i++)
{
printf("\nComponent %d\n", i+1);
printf("Enter Component ID: ");
scanf("%d", &c[i].id);
printf("Enter Weight (kg): ");
scanf("%f", &c[i].weight);
printf("Enter Material Type: ");
scanf("%29s", c[i].material);
}
printf("\n---MECHANICAL COMPONENT DETAILS---\n");
printf("ID\tWeight(kg)\tmaterial\n");
for(i=0; i<5; i++)
{
printf("%d\t%.2f\t\t%s\n",
c[i].id,c[i].weight,c[i].material);
}
return 0;
}
