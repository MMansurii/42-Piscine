void	ft_ultimate_div_mod(int *a, int *b)
{
	int	atemp;
	int	btemp;

	atemp = *a;
	btemp = *b;
	*a = atemp / btemp;
	*b = atemp % btemp;
}