/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 12:09:45 by eleonard          #+#    #+#             */
/*   Updated: 2019/09/13 13:55:45 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	s_len;
	char			*substr;
	unsigned int	index;

	index = 0;
	s_len = 0;
	substr = NULL;
	if (s)
	{
		s_len = ft_strlen(s);
		if (s_len <= start)
			return (NULL);
		substr = ft_strnew(len);
		if (!substr)
			return (NULL);
		while (index < len)
		{
			substr[index] = s[start + index];
			index++;
		}
		return (substr);
	}
	return (NULL);
}
