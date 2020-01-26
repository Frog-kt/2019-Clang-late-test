#include <stdio.h>

void test(int i, int j);

int main()
{
	void (*fp)(int, int) = test;
	fp(1, 3);
}

void test(int i, int j)
{
	printf("i: %d, j: %d", i, j);
}