/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespace.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 20:32:16 by alakhani          #+#    #+#             */
/*   Updated: 2019/11/10 21:05:26 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/al_string.h"

char	*ft_split_whitespace(char *s)
{
	int		i;
	char	*k;
	int		len;
	char	a;
	int		kcount;

	i = 0;
	kcount = 0;
	len = ft_strlen(s);
	k = (char *)malloc(sizeof(char) * len);
	while (i < len)
	{
		a = s[i];
		if (a != ' ' && a != '\t' && a != '\n')
		{
			k[kcount] = s[i];
			kcount++;
		}
		i++;
	}
	return (k);
}
