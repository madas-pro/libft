/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adolivie <adolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 12:12:57 by adolivie          #+#    #+#             */
/*   Updated: 2025/11/19 16:21:46 by adolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	**ft_split_alloc(char const *s, char c)
{
	int		count;
	int		i;
	int		reset;
	char	**ptr;

	count = 0;
	i = 0;
	reset = 0;
	while (s[i])
	{
		if ((s[i] != c) && (reset == 0))
		{
			count += 2; // pr le \0
			reset = 1;
		}
		else if (s[i] != c)
			count++;
		else
			reset = 0;
		i++;
	}
	ptr = malloc(count+100);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**ptr;
	int		reset;

	i = 0;
	j = 0;
	k = 0;
	reset = 0;
	ptr = ft_split_alloc(s, c);
	while (s[k])
	{
		if (s[k] != c)
		{
			ptr[i][j] = s[k];
			j++;
			reset = 1;
		}
		else if ((s[k] == c) && (reset == 1))
		{
			reset = 0;
			ptr[i][j] = '\0';
			i++;
		}
		k++;
	}
	return (ptr);
}
int	main(void)
{
	char **strr;
    int i;

    strr = ft_split("xabxcxxxdefxx", 'c');
    i = 0;
    while (strr[i])
	{
		printf("%s\n", strr[i]);
		i++;
	}
	free(strr);
}