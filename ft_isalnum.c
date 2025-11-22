/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adolivie <adolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:06:42 by adolivie          #+#    #+#             */
/*   Updated: 2025/11/22 15:28:49 by adolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int character)
{
	if (character > 64 && character < 91)
		return (1);
	else if (character > 96 && character < 123)
		return (1);
	return (0);
}
int	ft_isdigit(int character)
{
	if (character > 47 && character < 58)
		return (1);
	return (0);
}

int	ft_isalnum(int character)
{
	if (ft_isalpha(character) || ft_isdigit(character))
		return (1);
	return (0);
}
