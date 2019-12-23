/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 12:47:16 by eleonard          #+#    #+#             */
/*   Updated: 2019/09/09 16:59:18 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	index;
	size_t	size;
	char	*str;

	index = 0;
	str = NULL;
	size = 0;
	if (s1 && s2)
	{
		size = ft_strlen(s1) + ft_strlen(s2);
		str = ft_strnew(size);
		if (!str)
			return (NULL);
		ft_strcat(str, s1);
		ft_strcat(str, s2);
		return (str);
	}
	return (NULL);
}
