/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 22:07:08 by htalhaou          #+#    #+#             */
/*   Updated: 2022/10/29 22:47:37 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)

{
	const unsigned char	*s;
	unsigned char		*d;

	s = src;
	d = dst;
	if (!src && !dst)
		return (NULL);
	if (dst > src)
	{
		while (len--)
			*(d + len) = *(s + len);
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
