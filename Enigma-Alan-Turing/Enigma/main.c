#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

// Enigma
int main()
{
	int algorithm = 5;
	char* alphabet = "abcdefghijklmnopqrstuvwxyz";
	char* raw = "Hello World";
	char* find, encoded;
	int index;
	
	printf("%s\n", raw);
	for (int i = 0; raw[i] != '\0'; i++)
	{
		if (raw[i] != ' ')
		{
			find = strchr(alphabet, tolower(raw[i]));
			index = (int)(find - alphabet);

			if ((index + algorithm) > strlen(alphabet))
			{
				index =	(strlen(alphabet) - index);
				index = algorithm - index;
				index = abs(index);
			} else {
				index = index + algorithm;
			}

			encoded = alphabet[index];
			printf("%c", encoded);
		} else { printf(" "); }
	}

	return 0;
}
