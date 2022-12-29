#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int Enigma();

int Enigma(char *raw, char *result)
{
	int algorithm = 5;
	char* alphabet = "abcdefghijklmnopqrstuvwxyz";
	char* find, letter;
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

			letter = alphabet[index];
			result[i] = letter;
		} else { printf(" "); result[i] = ' '; }
	}

	return 0;
}
