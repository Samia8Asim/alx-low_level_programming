#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * @argc: number of argument
 * @argv: string list of argument
 * Return: 0 if number is - and minimum number of coins otherwise
 */

int main(int argc, char *argv[])
{
	int coins_num, i, num;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
		return (printf("Error\n"), 1);
	if (atoi(argv[1]) < 0)
		printf("%d\n", 0);
	else if (atoi(argv[1]) >= 0)
	{
		num = atoi(argv[1]);
		coins_num = 0;
		if (num > 100)
		{
			coins_num += 4;
			num -= 100;
		}
		for (i = 4; i >= 0; i--)
		{
			if (num % coins[i] == 0)
			{
				while (num >= coins[i])
				{
					num -= coins[i];
					coins_num++;
				}
			}

		}
		printf("%d\n", coins_num);
	}
	return (0);
}
