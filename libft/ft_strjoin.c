/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:52:51 by mayache-          #+#    #+#             */
/*   Updated: 2023/04/18 22:20:03 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*reue;
	size_t	lens1;
	size_t	lens2;

	if (!s1 || !s2)
		return (0);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	if (s1 && s2)
	{
		reue = (char *)malloc(lens2 + lens1 + 1);
		if (reue == NULL)
		{
			free(s1);
			return (NULL);
		}
		ft_strlcpy(reue, s1, lens1 + 1);
		ft_strlcat(reue, s2, lens2 + lens1 + 1);
		free(s1);
		return (reue);
	}
	return (0);
}
