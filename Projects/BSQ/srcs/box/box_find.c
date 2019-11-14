/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   box_find.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 19:59:02 by alakhani          #+#    #+#             */
/*   Updated: 2019/11/12 20:35:21 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "al_bsq.h"

char**		box_store(int width, char empty, char obstacle, char *map)
{
	char	**table;
	int		i;

	i = 0;
	table = malloc(sizeof(char) * width * width;
	
}

t_point		**search_obstacles(int width, char obstacle, char *map)
{
	int			x;
	int			y;
	t_struct	**list_points;

	list_points = malloc(sizeof(t_struct *));
	x = 0;
	y = 0;
	while (y < width)
	{
		while (x < width)
		{
			if (map[x + y * (width + 1)] == obstacle)
				add_point(list_points, x, y);	
			x++;
		}
		x = 0;
		y++;
	}
	return (list_points);
}
