void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int c, o;

	c = a / b;
	o = a % b;
	*div = c;
	*mod = o;
}
