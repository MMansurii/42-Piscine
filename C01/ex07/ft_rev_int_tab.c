void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[(size - 1) - i];
		tab[(size - 1) - i] = tab[i];
		tab[i] = temp;
		i++;
	}
}