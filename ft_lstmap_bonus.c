/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:27:08 by htalhaou          #+#    #+#             */
/*   Updated: 2022/10/09 17:54:00 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*listajedida;
	t_list	*nodejedida;

	listajedida = NULL;
	while (lst != NULL)
	{
		nodejedida = ft_lstnew(f(lst->content));
		if (!nodejedida)
		{
			ft_lstclear(&listajedida, del);
			return (NULL);
		}
		ft_lstadd_back(&listajedida, nodejedida);
		lst = lst->next;
	}
	return (listajedida);
}
