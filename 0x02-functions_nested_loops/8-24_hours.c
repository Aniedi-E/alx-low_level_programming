#include "main.h"

/**
 * jack_bauer - prints time
 */

void jack_bauer(void)
{
	int hoursTen, hoursOne, minutesTens, minutesOnes, hoursMax;

	hoursMax = 58;
	hoursTen = '0';
	while (hoursTen < '3')
	{
		if (hoursTen == '2')
		{
			hoursMax = '4';
		}
		hoursOne = '0';
		while (hoursOne < hoursMax)
		{
			minutesTens = '0';
			while (minutesTens < '6')
			{
				minutesOnes = '0';
				while (minutesOnes < 58)
				{
					_putchar(hoursTen);
					_putchar(hoursOne);
					_putchar(':');
					_putchar(minutesTens);
					_putchar(minutesOnes);
					_putchar('\n');
					minutesOnes++;
				}
				minutesOnes = '0';
				minutesTens++;
			}
			minutesTens = '0';
			hoursOne++;
		}
		hoursOne = '0';
		hoursTen++;
	}
}
