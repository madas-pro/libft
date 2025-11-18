/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adolivie <adolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 20:56:02 by adolivie          #+#    #+#             */
/*   Updated: 2025/11/14 21:12:47 by adolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	printf("%d\n", ft_strncmp("abd", "", 3));
	printf("%d\n", ft_strncmp("abd", "abc", 2));
	printf("%d\n", ft_strncmp("abd", "abc", 0));
	printf("%d\n", ft_strncmp("abd", "abc", 5));
	printf("%d\n", ft_strncmp("abd", "abc", 3));
	printf("%d\n", ft_strncmp("abd", "abc", 2));
	printf("%d\n", ft_strncmp("abd", "abc", 0));
	printf("%d\n", ft_strncmp("abd", "abc", 5));
}*/
