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

	for (i = 0; i < 3; i++)
	{
		int j;

		for (j = 0; j < 4; j++)
		{
			int k;

			for (k = 0; k < 6; k++)
			{
				int l;

				for (l = 0; l < 10; l++)
				{
					_putchar('i');
					_putchar('j');
					_putchar(':');
					_putchar('k');
					_putchar('l');
				}
				_putchar('\n');
			}
		}
	}
}
