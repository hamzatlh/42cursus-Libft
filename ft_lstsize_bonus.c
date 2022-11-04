/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:50:30 by htalhaou          #+#    #+#             */
/*   Updated: 2022/10/18 19:34:57 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)

{
	int		len;
	t_list	*temp;

	temp = lst;
	len = 0;
	while (temp)
	{	
		len++;
		temp = temp->next;
	}
	return (len);
}
