#include <stdio.h>

#include "Enigma/enigma.h"

int main()
{
	char encrypt[256];
	char decrypted[256];
	int err;
	
	printf("Message to encrypt: ");
	scanf("%[^\n]", encrypt);

	err = Enigma(encrypt, decrypted, 5);
	if (err != 0)
		return 1;
	printf("Encrypted: %s\n", decrypted);

	return 0;
}
