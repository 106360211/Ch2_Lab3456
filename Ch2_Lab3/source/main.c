#include <stdio.h>
#include <stdlib.h>

int h, low, upp, step;
double w;

int main(void)
{
	printf("�q�h��cm ?:");
	scanf("%d", &low);
	printf("��h��cm ?:");
	scanf("%d", &upp);
	printf("�C�j�h��cm ?:");
	scanf("%d", &step);

	for (h = low; h <= upp; h += step)
	{
		w = (h - 100)*0.9;
		printf("%dcm %.2fkg\n",h,w);
	}

	system("pause");
	return 0;
}