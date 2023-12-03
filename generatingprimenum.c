#include <stdio.h>

int main()
{
	int n, num, i, count;
	scanf("%d", &n);

	for (num = n; num >= 2; num--)
	{
		count = 0;

		for (i = 2; i <= num / 2; i++)
		{
			if (num % i == 0)
			{
				count++;
				break;
			}
		}

		if (count == 0 && num != 1)
		{
			printf("%d", num);
		}
	}

	return 0;
}
