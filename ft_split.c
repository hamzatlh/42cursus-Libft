/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:24:37 by htalhaou          #+#    #+#             */
/*   Updated: 2022/11/04 15:57:28 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	countwords(char const *str, char c)
{
	int	i ;
	int	count ;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
			count++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (count);
}

static char	*word(const char *str, char c)
{
	int			i;
	int			countlet;
	char		*rep;

	countlet = 0;
	while (str[countlet] && str[countlet] != c)
		countlet++;
	rep = (char *)malloc(sizeof(char) * (countlet + 1));
	if (!rep)
		return (0);
	i = 0;
	while (i < countlet)
	{
		rep[i] = str[i];
		i++;
	}
	rep[i] = '\0';
	return (rep);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;

	j = 0;
	i = 0;
	arr = malloc(sizeof(char *) * (countwords(s, c) + 1));
	if (!arr)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			arr[j] = word(&s[i], c);
				j++;
		}
		while (s[i] && s[i] != c)
			i++;
	}
	arr[j] = 0;
	return (arr);
}

// int main()
// {
//     char str[] = "ham;;;ham;z;a";
//     char **arr = ft_split(str, ';');
//     int i = 0;
//     while (i < 4)
//     {
//       printf("%s\n", arr[i]);
//       i++;
//     }
// }
