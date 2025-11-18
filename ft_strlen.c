/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adolivie <adolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:15:29 by adolivie          #+#    #+#             */
/*   Updated: 2025/11/14 21:12:50 by adolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_strlen("Abcde"));
	printf("%d", ft_strlen("Abcd"));
	printf("%d", ft_strlen(""));
	printf("%d", ft_strlen("A"));
}
*/
