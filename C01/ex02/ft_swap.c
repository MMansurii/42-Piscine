#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	nbtemp;

	nbtemp = *b;
	*b = *a;
	*a = nbtemp;
}