/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 21:37:33 by alakhani          #+#    #+#             */
/*   Updated: 2019/11/10 21:40:59 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "al_string.h"

char	*ft_strcpy(char *src, char *dest)
{
	int		i;
	int		len;

	len = ft_strlen(src);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
