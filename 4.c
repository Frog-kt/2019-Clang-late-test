#include <stdio.h>

int main(void)
{
	char s[] = "123456789";

	char *ps;
	ps = s;

	while (*ps != '\0')
	{
		printf("%c\n", *ps);
		++ps;
	}

	return (0);
}