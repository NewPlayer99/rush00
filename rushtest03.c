#include "ft_putchar.c"
#include <unistd.h>

void rush(int x, int y)
{
	int w;
	int h;

	h = 0;
	while(h++ < y)
	{
		w = 0;
		while(w++ < x)
		{
			if(h == 1 && (w == 1 || w == x))
				ft_putchar('A');
			else if(h == y && (w == 1 || w == x))
				ft_putchar('C');
			else if((w == 1 || w == x) || (h == 1 || h == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}	
