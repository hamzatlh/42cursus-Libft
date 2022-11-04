/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:58:32 by htalhaou          #+#    #+#             */
/*   Updated: 2022/10/19 09:55:07 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_dest;
	size_t	len_src;
	size_t	len_dest_src;

	len_dest = ft_strlen(dst);
	len_src = ft_strlen(src);
	len_dest_src = len_dest + len_src;
	i = 0;
	if (dstsize == 0 || dstsize <= len_dest)
		return (len_src + dstsize);
	while (src[i] && i < (dstsize - len_dest - 1))
	{
			dst[len_dest + i] = src[i];
			i++;
	}
	dst[len_dest + i] = '\0';
	return (len_dest_src);
}
