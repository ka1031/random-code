#include <stdio.h>

int atoi(const char *strg)
{
	int res = 0;
	int i = 0;

	// does not work for negative
	while (strg[i] != '\0')
	{
		res = res * 10 + (strg[i] - '0');
		i++;
	}
	return res;
}

int main()
{
	const char strg[] = "-7";
	int value = atoi(strg);

	printf("String to be Converted: %s\n", strg);
	printf("Converted to Integer: %d\n", value);
	return 0;
}
