int	ft_atoi(void)
{
	int i;
	int res;
	int neg;

	i = 0;
	res = 0;
	neg = 1;
	if (nptr[0] == '-')
	{
		neg = -1;
		i = 1;
	}
	while (isdigit(nptr[i]))
	{
		res *= 10;
		res += (int)(nptr[i]);
		i++;
	}
	return (res * neg);
}