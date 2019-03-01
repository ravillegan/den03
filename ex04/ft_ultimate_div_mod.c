void	ft_ultimate_div_mod(int *a, int *b)
{
	int c, o;

	c = *a / *b;
	o = *a % *b;
	*a = c;
	*b = o;
}
