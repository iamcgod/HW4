#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int addbyone(int& xptr);

void main()
{
	int x = 100;
	int y = addbyone(x);
	printf("x=%d\n", x);
	system("PAUSE");
}

int addbyone(int& xref)
{
	xref++;
	printf("xref=%d\n", xref);
	return xref;
}