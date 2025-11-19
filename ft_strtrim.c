/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adolivie <adolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 11:40:34 by adolivie          #+#    #+#             */
/*   Updated: 2025/11/19 11:50:38 by adolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_strtrim_deb(char const *s1, char const *set)
{
	int	i;
	int	j;

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
	return (i);
}

int	ft_strtrim_fin(char const *s1, char const *set)
{
	int	i;
	int	j;

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
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*ptr;
	int		deb;
	int		fin;

	deb = ft_strtrim_deb(s1, set);
	fin = ft_strtrim_fin(s1, set);
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
/*
int	main(void)
{
	char	*str;

	str = ft_strtrim("xxaxbcdxxx", "uxd");
	printf("%s\n", str);
	free(str);
}*/
