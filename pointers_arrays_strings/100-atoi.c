#include <stdio.h>
/**
 * _atoi - converts numeric strings from input string into ints
 * @s: input string
 *
 * Return: int resulting from conversion
 */
int _atoi(char *s)
{
	int i = 0, d = 0, sign = 1, n1, sum = 0, j, tens = 1;

	while (s[i])
	{
		if (s[i] >= 48 && s[i] <= 57)
		{	
			if (i == 0 || (s[i - 1] < 48 || s[i - 1] > 57))
			{	
				if (s[i - 1] == '-')
					sign = -1;		
				n1 = i;
			}
			d++;
		}
		else
			if (s[i - 1] >= 48 && s[i - 1] <= 57)
			{	
				break;
			}
		i++;
	}
	/* printf("%d %d\n", n1, d); */
	if (d == 1)
		return (s[n1] - 48);
	else
	{
		sum += (s[n1 + d - 1] - 48);
		for (i = 1; i < d; i++)
		{
			for (j = 0; j < i; j++)
				tens *= 10;
			sum += ((s[n1 + d - 1 - i] - 48)* tens);
			tens = 1;
		}
		sum *= sign;
		return (sum);
	}
}
