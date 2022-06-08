#include "main.h"
/**
 * jack_bauer - Function that prints every minute of the day 00:00 - 23:59
 * lt20: char that helps to count up to 9 when the hour count is below 20
 *
 * Return: void
 */
void jack_bauer(void)
{
	char i_1, i_2, i_3, i_4, lt20;

	for (i_1 = '0'; i_1 <= '2'; i_1++)
	{
		if (i_1 < '2')
			lt20 = '9';
		else
			lt20 = '3';
		for (i_2 = '0'; i_2 <= lt20; i_2++)
		{
			for (i_3 = '0'; i_3 <= '5'; i_3++)
			{
				for (i_4 = '0'; i_4 <= '9'; i_4++)
				{
					_putchar(i_1);
					_putchar(i_2);
					_putchar(':');
					_putchar(i_3);
					_putchar(i_4);
					_putchar('\n');
				}
			}
		}
	}
}
