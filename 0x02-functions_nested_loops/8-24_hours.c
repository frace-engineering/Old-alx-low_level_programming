#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 *
 * @i: integer number
 * @j: integer number
 * @k: integer number
 * @l: integer number
 * Return: void
 */
void jack_bauer(void)
{
	int i;

	for (i = 48; i < 51; i++)
	{
		int j;

		for (j = 48; j < 52; j++)
		{
			int k;

			for (k = 48; k < 55; k++)
			{
				int l;

				for (l = 48; l < 58; l++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
				}
				_putchar('\n');
			}
		}
	}
}
