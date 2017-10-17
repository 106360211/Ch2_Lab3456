#include <stdio.h>
#include <stdlib.h>

int h, low, upp, step;
double w;

int main(void)
{
	printf("從多少cm ?:");
	scanf("%d", &low);
	printf("到多少cm ?:");
	scanf("%d", &upp);
	printf("每隔多少cm ?:");
	scanf("%d", &step);

	for (h = low; h <= upp; h += step)
	{
		w = (h - 100)*0.9;
		printf("%dcm %.2fkg\n",h,w);
	}

	system("pause");
	return 0;
}