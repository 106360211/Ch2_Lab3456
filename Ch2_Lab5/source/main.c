#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	double population = 6763;
	double rate = 0.0118;
	double newPop = population;
	double newPop2 = population;
	double x = 1;
	int year, i;


	printf("%15s%30s%25s\n", "Year from now", "Population (in millions)", "Increase (in millions)");



	for (year = 1; year <= 75; year++)
	{
		for (i = 1; i <= year; i++)
		{
			x = x * (1 + rate);
		}
		newPop2 = newPop;
		newPop = population * x;
		printf("%15d%30.2f%25.2f\n", year, newPop, newPop - newPop2);
		x = 1;
	}

	system("pause");
	return 0;
}