/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 21:31:06 by alakhani          #+#    #+#             */
/*   Updated: 2019/11/11 16:56:30 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/al_string.h"

char	*ft_strcat(char *a, char *b)
{
	char	*cat;
	int		len1;
	int		len2;

	len1 = ft_strlen(a);
	len2 = ft_strlen(b);
	cat = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	cat = ft_strcpy(a, cat);
	cat = ft_strcpy(b, cat + len1);
	return (cat - len1);
}
