/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:27:45 by mayache-          #+#    #+#             */
/*   Updated: 2023/04/18 23:30:49 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	cnt_words(const char *str, char delimiter)
{
	int	cnt;
	int	i;

	i = 0;
	cnt = 0;
	while (str[i])
	{
		if (str[i] != delimiter)
		{
			cnt++;
			while (str[i] && str[i] != delimiter)
				i++;
		}
		else
			i++;
	}
	return (cnt);
}

void	message_error1(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

int	sizew(char const *s, char c, int i)
{
	int	sz;

	sz = 0;
	while (s[i] != c && s[i])
	{
		sz++;
		i++;
	}
	return (sz);
}

void	ft_check_len(int wrds, char const *s, char c)
{
	size_t	sz;
	size_t	count;
	int		i;

	i = 0;
	count = 0;
	while (i < wrds)
	{
		while (s[count] == c)
			count++;
		sz = sizew(s, c, count);
		if (sz > 20)
			message_error1();
		i++;
		count = count + sz;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**stck;
	int		i;
	size_t	sz;
	size_t	count;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	ft_check_len(cnt_words(s, c), s, c);
	stck = (char **)malloc((cnt_words(s, c) + 1) * sizeof(char *));
	if (stck == NULL)
		return (stck);
	while (i < cnt_words(s, c))
	{
		while (s[count] == c)
			count++;
		sz = sizew(s, c, count);
		stck[i] = ft_substr(s, count, sz);
		i++;
		count = count + sz;
	}
	stck[i] = 0;
	return (stck);
}
