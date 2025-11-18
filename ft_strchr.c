/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adolivie <adolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 12:56:01 by adolivie          #+#    #+#             */
/*   Updated: 2025/11/14 18:19:44 by adolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	return ((char *)str + i);
}

int	main(void)
{
	char a[10] = "Bonjour";
	printf("%s\n", strchr(a, 'j'));
}