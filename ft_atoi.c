/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adolivie <adolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 12:02:06 by adolivie          #+#    #+#             */
/*   Updated: 2025/11/22 15:42:06 by adolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int character)
{
	if (character > 47 && character < 58)
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	res;
	int	neg;

	i = 0;
	res = 0;
	neg = 1;
	if (nptr[0] == '-')
	{
		neg = -1;
		i = 1;
	}
	while (ft_isdigit(nptr[i]))
	{
		res *= 10;
		res += (int)(nptr[i]);
		i++;
	}
	return (res * neg);
}
