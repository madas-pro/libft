#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		deb;
	int		fin;
	char	*ptr;

	i = 0;
	j = 0;
	while (set[j])
	{
		if (s1[i] == set[j])
		{
			j = 0;
			i++;
		}
		j++;
	}
	deb = i;
	i = ft_strlen((char *)s1) - 1;
	j = 0;
	while (set[j])
	{
		if (s1[i] == set[j])
		{
			j = 0;
			i--;
		}
		j++;
	}
	fin = i;
	ptr = malloc(fin - deb + 1);
	if (ptr == NULL)
		return (NULL);
	i = deb;
    j = 0;
	while (i <= fin)
	{
		ptr[j] = (char)s1[i];
		i++;
        j++;
	}
    ptr[j] = '\0';
	return (ptr);
}
int	main(void)
{
	printf("%s\n", ft_strtrim("xxaxbcdxxx", "uxd"));
}