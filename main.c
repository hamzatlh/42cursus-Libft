/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:05:45 by htalhaou          #+#    #+#             */
/*   Updated: 2022/11/01 22:50:09 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include "libft.h"
//1)ft_memcpy.c
// int main() {
// 	char str1[] = "Simple string";
// 	char str2[10];
// 	ft_memcpy(str2, str1,10);
// 	printf("str1: %s\n str2: %s\n", str1, str2);
// 	return 0;
// }

// 2)ft_memmove.c
// int main()
// {
// 	char str[] = "abcdefghijkl";
// 	memmove(str, str+2, 2);
// 	puts(str);
// 	return 0;
// }

//3)ft_putchar_fd.c
// int main ()
// {
// 	int	fd;
// 	fd = open("test.txt",O_RDONLY | O_WRONLY | O_CREAT);
// 	ft_putchar_fd('X', fd);
// 	close(fd);
// 	return (0);
// }

//ft_atoi.c
// int main(void)
// {
//     char S[] = "-12345";
//     printf("%d ", ft_atoi(S));
//     return 0;
// }

// ft_itoa.c
//int main(void)
// {
// 	int	s;
// 	s = -12345;
// 	printf("%s ", ft_itoa(s));
// 	return (0);
// }

//bzero
// int main(void)
// {
//     char S[] = "hamza";
//     int a = ft_bzero(&S, 3);
// 	printf("%d ", a);
// }

// memcpy doubles
// int	main()
// {
// 	double	t[3] = {1.5, 4.6, 7.9};
// 	double	d[3];
// 	ft_memcpy(d, t, sizeof(double) * 3);
// 	printf("%f", d[0]);
// 	return 0;
// }

//ft_memchr.c
// int main ()
// {
// 	char s[] = "hamza";
// 	printf("%s", ft_memchr(s, 'a', 4));
// }

//ft_memcmp.c
// int main()
// {
// 	const double s[3] = {1.2, 50.4, 1.9};
// 	double d[3] = {1.3, 8.8, 1.0};
// 	printf("%d", ft_memcmp(s, d, sizeof(double) * 2));
// 	return 0;
// }

// ft_memset.c
// int main()
// {
// 	char s[] = "hamza";
// 	char c = 'p';
// 	printf("%s", ft_memset(s, c, 3));
// }

// ft_strchr.c
// int main()
// {
// 	char s[] = "hamza";
// 	char c = 'q';
// 	printf("%s", ft_strchr(s, c)); 
// }

// ft_strdup.c
// int main ()
// {
// 	char *p;
// 	char *k = "hamza";
// 	p = ft_strdup(k);
// 	printf("%s",p);
// }

// ft_striteri.c
// void func(unsigned int index, char *c)
// {
// 	//printf(" %c + %u => %c \n", *c,index,(*c + (int)index));
// 	printf(" %s \n", c);
// }
// int main()
// {
// 	char *s = "SEMEH SHi 9ALWA";
// 	ft_striteri(s, func);
// 	return 0;
// }

// ft_strjoin.c
// int main()
// {
// 	char s1[] = "hamza";
// 	char s2[] = "talha";
// 	printf("%s", ft_strjoin(s1, s2));
// }

//ft_strlcat.c
// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char dest[30] = "hello my name is hamza";
// 	char src[] = "t9ewed";
// 	printf("%lu", strlcat(dest, src, 10));
// 	printf("%s", dest);
// 	return (0);
// }

//ft_strlcpy.c
// int main()
// {
// 	char dest[30] = "hello my name is hamza";
// 	char src[] = "t9ewed";
// 	printf("%lu", ft_strlcpy(dest, src, 2));
// 	printf("%s", dest);
// 	return (0);
// }

//ft_strmapi.c
// #include <stdio.h>
// char f(unsigned int i, char c)
// {
// 	i = 0;
// 	if (c >= 'a' && c <= 'z')
// 		return (c - 32);
// 	return (c);
// }
// int main()
// {
// 	char str1[] = "abc";
// 	char* str2;
// 	str2 = ft_strmapi(str1, f);
// 	printf("%s\n", str2);
// }

//ft_strncmp.c
// int main()
// {
// 	int arr;
// 	char str[] = "hamza";
// 	char s[] = "hajka";
// 	arr = ft_strncmp(str, s, 1);
// 	printf("%d", arr); 
// }

//ft_strnstr.c
// int main()
// {
// 	char *arr;
// 	const char str[] = "hamza";
// 	arr = ft_strnstr(str,"a", 2);
// 	printf("%s", arr);
// }

//ft_split.c
// int main()
// {
//     char str[] = ";;;ham;z;a";
//     char **arr = ft_split(str, ';');
//     int i = 0;
//     while (i < 3)
//     {
//       printf("%s\n", arr[i]);
//       i++;
//     }
// }

//ft_lstnew.c
// int main()
// {
// 	t_list	*a;
// 	t_list	*b;
// 	t_list	*c;

// 	a = ft_lstnew("HAMZA");
// 	b = ft_lstnew("kolo");
// 	c = ft_lstnew("viva");
// 	a->next = b;
// 	b->next = c;

// 	t_list	*head;
// 	head = a;
// 	while (head)
// 	{
// 		printf("%s \n", head->content);
// 		head = head->next;
// 	}
// }

//void	aff(t_list *a)
// {
// 	t_list	*head;

// 	head = a;
// 	while (head)
// 	{
// 		printf("%s \n", head->content);
// 		head = head->next;
// 	}
// }

//ft_lstadd_front.c
// int main()
// {
// 	t_list	*a;
// 	t_list	*b;
// 	t_list	*head;
// 	a = ft_lstnew("137");
// 	b = ft_lstnew("mohamed");
// 	head = a;
// 	ft_lstadd_front(&head, b);
// 	while (head)
// 	{
// 		printf("%s" , head->content);
// 		head = head->next;
// 	}
// }

//ft_lstadd_back.c
//int main()
// {
// 	t_list	*a;
// 	t_list	*b;
// 	t_list	*head;

// 	a = ft_lstnew("137");
// 	b = ft_lstnew("mohamed");
// 	head = a;
// 	ft_lstadd_back(&head, b);
// 	while (head)
// 	{
// 		printf("%s" , head->content);
// 		head = head->next;
// 	}
// }

//ft_lstdelone.c
// void del(void * content)
// {
// 	free(content);
// }
//int main()
// {
// 	t_list	*a;
// 	t_list	*b;
// 	t_list	*head;

// 	a = ft_lstnew(ft_strdup("hello"));
// 	b = ft_lstnew(ft_strdup("kolo"));
// 	a->next = b;
// 	head = a;
// 	ft_lstdelone(head, del);
// 	while (head)
// 	{
// 		printf("%s", head->content);
// 		head = head->next;
// 	}
// }

//ft_lstlast.c
// int main()
// {
// 	t_list	*a;
// 	t_list	*b;
// 	 t_list	*head;

// 	a = ft_lstnew("ddsf");
// 	b = ft_lstnew("kfkfkf");
// 	a->next = b;
// 	head = a;
// 	t_list *last = ft_lstlast(head);
// 	printf("%s\n", (char *)last->content);
// }

// ft_lst_size.c
// int main()
// {
// 	t_list	*a;
// 	t_list	*b;
// 	t_list	*head;

// 	a = ft_lstnew(ft_strdup("lklk"));
// 	b = ft_lstnew(ft_strdup("jhjhjh"));
// 	a->next = b;
// 	head = a;
// 	printf("%d", ft_lstsize(head));
// }

// void	del(void *content)
// {
// 	free(content);
// }

// int main()
// {
// 	t_list	*q;
// 	t_list	*d;
// 	t_list	*head;

// 	d = ft_lstnew(ft_strdup("mmmcnis"));
// 	q = ft_lstnew(ft_strdup("SDDDF"));
// 	head = d;
// 	d->next = q;
// 	printf("%s\n", head->content);
// 	ft_lstclear(&head, del);
// 	printf("%s", head->next->content);
// }