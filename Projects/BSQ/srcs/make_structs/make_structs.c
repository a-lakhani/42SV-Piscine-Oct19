/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_structs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 20:18:15 by alakhani          #+#    #+#             */
/*   Updated: 2019/11/12 20:28:19 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "al_bsq.h"

void	add_point(t_struct **head, int x, int y)
{
	t_struct	*point;
	t_struct	*last;

	point = malloc(sizeof(t_struct *));
	last = *head;
	point->x = x;
	point->y = y;
	point->next = NULL;
	if (last)
	{
		while (last->next)
			last = last->next;
		last->next = point;
	}
	else
		*head = point;
}


