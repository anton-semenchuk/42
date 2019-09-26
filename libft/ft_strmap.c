/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilongtow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 23:14:01 by ilongtow          #+#    #+#             */
/*   Updated: 2019/09/25 00:14:35 by ilongtow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char 	*new_str;
	int		i;

	i = 0;
	if (!(new_str = (char *)(malloc(sizeof(char) * ft_strlen(s) + 1))))
		return (NULL);
	ft_strcpy(new_str, s);
	while (new_str[i])
	{
		new_str[i] = f(new_str[i]);
		i++;
	}
	return (new_str);
}
