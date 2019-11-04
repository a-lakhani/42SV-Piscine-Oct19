/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 22:21:16 by alakhani          #+#    #+#             */
/*   Updated: 2019/10/31 23:58:36 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	diff;
	int	i;

	i = 0;
	if (min >= max)
		return NULL;
	else
		diff = max - min;
	range = malloc(4 * diff);
	while (i < diff)
		range[i] = min + i;
	return (range);
}
