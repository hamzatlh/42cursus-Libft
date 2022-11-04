/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:20:18 by htalhaou          #+#    #+#             */
/*   Updated: 2022/10/19 11:20:15 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)

{
	int		i;
	int		j;
	size_t	size;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i])
	{
		if (!ft_check(set, s1[i]))
			break ;
		i++;
	}
	while (j >= i)
	{
		if (!ft_check(set, s1[j]))
			break ;
		j--;
	}
	size = j - i + 1;
	return (ft_substr(s1, i, size));
}
