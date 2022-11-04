/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:44:11 by htalhaou          #+#    #+#             */
/*   Updated: 2022/10/09 19:41:17 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)

{
	char	*p;
	size_t	new_len;

	new_len = len;
	if (new_len > ft_strlen(s))
	{
		p = malloc(sizeof(char) * ft_strlen(s) + 1);
		new_len = ft_strlen(s) - start;
	}
	else
		p = malloc(sizeof(char) * len + 1);
	if (!p)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		p[0] = '\0';
		return (p);
	}
	ft_memcpy(p, s + start, new_len);
	p[new_len] = '\0';
	return (p);
}
