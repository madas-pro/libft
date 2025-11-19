/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adolivie <adolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:11:01 by adolivie          #+#    #+#             */
/*   Updated: 2025/11/19 11:53:39 by adolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size && src)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (ft_strlen((char *)src));
}
/*
int	main(void)
{
	char dest[0];
	const char *src = "Bonjour";
	printf("%zu\n", ft_strlcpy(dest, src, 8));
	printf("%s\n", dest);
}*/