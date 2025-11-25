/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adolivie <adolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 13:28:32 by adolivie          #+#    #+#             */
/*   Updated: 2025/11/25 10:12:56 by adolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strrchr(const char *str, int c)
{
	int		i;
	char	*result;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			result = (char *)str + i;
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	char	a[10] = "Bonjour";

	printf("%s\n", strrchr(a, 'o'));
}*/
