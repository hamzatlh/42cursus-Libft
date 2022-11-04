/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:17:26 by htalhaou          #+#    #+#             */
/*   Updated: 2022/10/19 15:15:33 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	if (!lst)
		return (0);
	temp = lst;
	while (temp)
	{	
		if (!temp->next)
			return (temp);
		temp = temp->next;
	}
	return (lst);
}

// void print_int_list(t_list *head)
// {
// 	t_list *tmp = head;
// 	printf("head -> ");
// 	while(tmp)
// 	{
// 		printf("%d -> ", *(int *)(tmp->content));
// 		tmp = tmp->next;
// 	}
// 	printf("NULL\n");
// }

// int main()
// {
// 	int a = 2;
// 	int b = 3;
// 	t_list *head = NULL;
// 	ft_lstadd_back(&head, ft_lstnew(&a));
// 	ft_lstadd_back(&head, ft_lstnew(&b));
// 	print_int_list(head);
// 	t_list *last = ft_lstlast(head);
// 	printf("last element : %d\n", *(int *)last->content);
// }