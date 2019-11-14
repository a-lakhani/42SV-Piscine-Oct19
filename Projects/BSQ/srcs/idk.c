/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   idk.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 18:10:27 by alakhani          #+#    #+#             */
/*   Updated: 2019/11/13 21:37:08 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "al_bsq.h"

/*
void	cash_money(char *max_boxes, int width)
{
	int		i;

	i = 0;
	max_boxes = malloc(sizeof(char *) * (width));
	while (i < width)
		max_boxes[i] = malloc(sizeof(char *) * width);
}
*/

int		min_of_3(int a, int b, int c)
{
	int		min;

	if ((a <= b && b <= c) || (a <= c && c <= b))
		min = a;
	else if ((b <= a && a <= c) || (b <= c && c <= a))
		min = b;
	else
		min = c;
	return (!min ? -1 : min);
}

int		min_neighbors(int x, int y, char *max_boxes, int width)
{
	int		left;
	int		above;
	int		corner;

	left = x - 1 >= 0 ? max_boxes[(y * (width + 1)) + x - 1] - '0': 0;
	above = y - 1 >= 0 ? max_boxes[((y - 1) * (width + 1)) + x] - '0' : 0;
	corner = x - 1 >= 0 && y - 1 >= 0 ?
		max_boxes[((y - 1) * (width +1)) + x - 1] - '0': 0;
	return (!min_of_3(left, above, corner) ? -1 : min_of_3(left, above, corner));
}

void	replace_obstacles(char *max_boxes, char obstacle)
{
	int		i;

	i = 0;
	while (max_boxes[i])
	{
		if (max_boxes[i] == obstacle)
			max_boxes[i] = '0';
		else
			max_boxes[i] = max_boxes[i] == '\n' ? '\n' : '1';
		i++;
	}
}

void	add_neighbors(char *max_boxes, int width)
{
	int		i;

	i = 0;
	while (max_boxes[i])
	{
		if (max_boxes[i] != '\n')
		{
			max_boxes[i] = min_neighbors(i % (width + 1),i / (width + 1),
					max_boxes, width) + 1 + '0';
		}
		i++;
	}
}

int     main(int ac, char *av[])
{
	char    *in;
//	int     f;
	int     fnum;
//	char    *next_char;
//	int     bytes_read;
	int     width;

	fnum = 1;
//	bytes_read = 0;
//	next_char = malloc(10);
	if (ac > 1)
 	{
	 while (fnum < ac)
 		{
 		in = read_box_file(av[fnum]);
		printf("%s", in);
		width = box_width(av[fnum]);
		printf("width = %d\n", width);
		printf("obstacle is:%c\n", *(in + first_line_length(in) - 2));
		replace_obstacles(in + first_line_length(in), *(in + first_line_length(in) - 2));
		printf("%s", in);
		add_neighbors(in + first_line_length(in) + 1, width);
		printf("\n\n\nsupposed to be summed\n%s", in + first_line_length(in));
		fnum++;
		}
 	}
 	return (0);
}
