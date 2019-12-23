/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:16:09 by eleonard          #+#    #+#             */
/*   Updated: 2019/09/09 14:08:59 by eleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	i;
	size_t	k;
	char	*str;

	i = 0;
	k = ft_strlen(src);
	str = ft_strnew(k);
	if (str == NULL)
		return (NULL);
	while (i < k)
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}
