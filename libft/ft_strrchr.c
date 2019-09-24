/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilongtow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 14:11:13 by ilongtow          #+#    #+#             */
/*   Updated: 2019/09/24 14:30:35 by ilongtow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	while (*s)
		s++;
	if (*s == (char)c)
		return ((char *)s);
	while (--s)
	{
	if (*s == (char)c)
		return ((char *)s);
	}
	return (NULL);
}
