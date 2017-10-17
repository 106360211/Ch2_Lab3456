#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int c;
	float t = 0;
	float a = 0;
	float tax = 0;



	printf("Welcome to the Fair Tax Calculator!");
	printf("\nHere are some common expense categories");
	printf("\n1: Housing, 2: Food, 3: Clothing, 4: Transportation, 5: Education, \n6: Health care, 7: Vacations\n");



	for (c = 1; c <= 7; c++)
	{
		printf("Please input how much you paid for expenses in category %d:", c);
		scanf("%f", &a);
		t += a;
	}
	tax = t*0.23;

	printf("Your total Fair Tax would be $%.2f\n",tax);
	system("pause");

	return 0;
}