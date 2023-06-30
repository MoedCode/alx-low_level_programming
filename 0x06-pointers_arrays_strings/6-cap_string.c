#include "main.h"

/**
 * cap_string - capitalizes
 * @s: input string
 * Return: tge pointer to dest
 */
char *cap_string(char *s)
{
	int i, C = 0,
	SW[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 123,  125};

	if (*(s + C) >= 97 && *(s + C) <= 122)
		*(s + C) = *(s + C) - 32;
	C++;

	while (*(s + C) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + C) == SW[i])
			{
				if ((*(s + (C + 1)) >= 97) && (*(s + (C + 1)) <= 122))
					*(s + (C + 1)) = *(s + (C + 1)) - 32;
				break;

			}

		}
		C++;
	}
	return (s);

}
