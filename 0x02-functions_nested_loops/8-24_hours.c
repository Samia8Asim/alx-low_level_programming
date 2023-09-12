#include "main.h"

/**
 * jack_bauer -  prints every minute of the day of Jack Bauer
 */

void jack_bauer(void)
{
	int hr = 0, min;

	while (hr <= 23)
	{
		min = 0;

		while (min <= 59)
		{
			_putchar((hr / 10) + 48);
			_putchar((hr % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');
			min++;
		}

		hr++;
	}
}
