/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 21:22:05 by alakhani          #+#    #+#             */
/*   Updated: 2019/10/31 23:26:27 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*copy;
	int		i;

	i = 0;
	len = ft_strlen(src);
	copy = NULL;
	if (len == 0)
		return (copy);
	else
		copy = malloc(len);
	while (len)
	{
		copy[i] = src[i];
		if (src[i] == '\0')
			break ;
		i++;
	}
	return (copy);
}
