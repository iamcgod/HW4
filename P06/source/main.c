#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main() {
	int j, s[10];
	for (j = 0; j < SIZE; j++) {
		s[j] = 2 + 2 * j;
	}
	printf("%s%13s\n", "Element", "Valuue");
	for (j = 0; j < SIZE; j++) {
		printf("%7d%13d\n", j, s[j]);
	}
	system("pause");
	return 0;
}