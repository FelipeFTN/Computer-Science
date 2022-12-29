#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int Enigma();

int Enigma(char *raw, char *decrypted, int algorithm)
{
	char* alphabet = "abcdefghijklmnopqrstuvwxyz";
	char* find, letter;
	int index;
	
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
			} else { index = index + algorithm; }

			letter = alphabet[index];
			decrypted[i] = letter;
		} else { decrypted[i] = ' '; }
	}

	return 0;
}
