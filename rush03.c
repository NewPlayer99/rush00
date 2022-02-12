#include <unistd.h>
#include "ft_putchar.c"
void rush(int y, int x) //column, row
{
	int i, j;
	i = 1;
	j = 1;

	if(x >= 1 && y >= 1)
	{
		while(i <= x)
		{
			while(j <= y)
			{
				if(i == 1 && j == 1 || i == x && j == 1)
				{
					ft_putchar('A');
				}
				else if(i == 1 && j == y || i == x && j == y)
				{
					ft_putchar('C');
				}	
				else if(i > 1 && i < x && j > 1 && j < y)
				{
					ft_putchar(' ');
				}	
				else
				{
					ft_putchar('B');
				}
				j++;
			}
			i++;
			j = 1;
			ft_putchar('\n');
		}
	}
}

