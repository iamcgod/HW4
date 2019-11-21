#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int a[10];
	srand(time(NULL));
	for(int i = 0; i < 10; i++)
		a[i] = rand()%100;
	
	for (int i = 9; i > 0; i--)
	{
		char cc = 0;
		for (int j = 0; j < i; j++)
		{
			if (a[j] >= a[j + 1])
			{
				int tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
				cc=1;
			}
		}
		
		if (cc == 0)
			break;

		printf("Step %2d :{", 10-i);

		for (int i = 0; i < 10; i++)
		{
			printf("%d", a[i]);
			if (i < 9)
			{
				printf(",");
			}
		}
		printf("}\n");

	}
	system("pause");
	return 0;
}