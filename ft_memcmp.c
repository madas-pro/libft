int	ft_memcmp(const void *s1, const void *s2, size_t int)
{
	size_t i;

	i = 0;
	while (i < n && s1[i] == s2[i])
        i++;
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}
/*
int	ft_memcmp(const void *s1, const void *s2, size_t int)
{
	size_t i;

	i = 0;
	while (i < n && s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}*/
