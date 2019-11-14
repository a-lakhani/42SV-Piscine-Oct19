/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_string.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 20:50:57 by alakhani          #+#    #+#             */
/*   Updated: 2019/11/10 21:08:01 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "al_strings.h"

char	*ft_reverse_string(char *s)
{
	char	*k;
	int		len;
	int		a;
	int		b;

	b = 0;
	len = ft_strlen(s);
	a = len - 1;
	k = (char *)malloc(sizeof(char) * len);
	while (b < len)
		k[b++] = s[a--];
	k[b] = 0;
	return (k);	
}
