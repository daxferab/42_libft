/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 03:14:33 by daxferna          #+#    #+#             */
/*   Updated: 2025/03/22 18:55:56 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;
	size_t	slen;

	i = 0;
	slen = ft_strlen(s);
	if (start >= (unsigned int)slen)
		return (ft_calloc(1, sizeof(char)));
	if (slen - start + 1 > len)
		p = malloc(len + 1);
	else
		p = malloc(slen - start + 1);
	if (p == 0)
		return (0);
	while (i < len && s[start + i] != 0)
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = 0;
	return (p);
}
