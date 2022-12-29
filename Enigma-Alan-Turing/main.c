#include "Enigma/enigma.h"
#include <stdio.h>

int main()
{
	char result[256] = { 0 };
	int err;

	err = Enigma("hello world", result);
	if (err != 0)
		return 1;

	printf("%s", result);

	return 0;
}
