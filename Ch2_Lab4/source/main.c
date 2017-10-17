#include <stdio.h>
#include <stdlib.h>

int g,a,b,c,d,f;

int main(void)
{
	printf("Enter the letter grades .\n");
	printf("Enter the EOF character to end input .\n");
	
	while ((g = getchar()) != EOF)
	{
		switch (g)
		{
			case 'A':
			case 'a':
				++a;
				break;
			case 'B':
			case 'b':
				++b;
				break;
			case 'C':
			case 'c':
				++c;
				break;
			case 'D':
			case 'd':
				++d;
				break;
			case 'F':
			case 'f':
				++f;
				break;
			case '\n':
			case '\t':
			case ' ':
				break;
			default:
				printf("InCorrect letter grade entered .");
				printf("Enter a new grade .\n");
				break;
		}
	}
	printf("\nTotal for each letter grade are :\n");
	printf("A:%d\n", a);
	printf("B:%d\n", b);
	printf("C:%d\n", c);
	printf("D:%d\n", d);
	printf("F:%d\n", f);

	system("pause");
	return 0;
}