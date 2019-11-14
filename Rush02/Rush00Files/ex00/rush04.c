/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 15:52:48 by tmarston          #+#    #+#             */
/*   Updated: 2019/11/10 17:00:55 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */ 

#include "ft_list.h"
#include <stdlib.h>

char	*rush04(int horiz, int vert)
{
	char	*top;
	char	*middle;
	char	*bottom;
	char	*finalbox;

	if (horiz > 0 && vert > 0)
	{
		top = print_horiz_first(horiz);
		if (vert == 1)
			return (top);
		else if (vert > 1)
		{
			middle = print_vert(vert, horiz);
			bottom = print_horiz_second(horiz);
		}
		if (vert == 2)
			finalbox = our_strncat(top, bottom);
		else
		{
			finalbox = our_strncat(top, middle);
			finalbox = our_strncat(finalbox, bottom);
		}
		return (finalbox);
	}
	else
		return (NULL);
}

char	*print_horiz_first(int horiz)
{
	int 	i;  
	char	*box;

	box = (char *)malloc(sizeof(char) * horiz + 2);
	i = 1;
	while (i <= horiz)
	{
		if (i == 1)
			box[i - 1] = 'A';
		else if (i == horiz && horiz > 1)
			box[i - 1] = 'C';
		else
			box[i - 1] = 'B';
		i++;
	}
	box[i - 1] = '\n';
	box[i] = '\0';
	return (box);
}

char	*print_horiz_second(int horiz)
{
	int 	i;  
	char	*box;

	box = (char *)malloc(sizeof(char) * horiz + 2);
	i = 1;
	while (i <= horiz)
	{
		if (i == 1)
			box[i - 1] = 'C';
		else if (i == horiz && horiz > 1)
			box[i - 1] = 'A';
		else
			box[i - 1] = 'B';
		i++;
	}
	box[i - 1] = '\n';
	box[i] = '\0';
	return (box);
}

char	*print_vert(int vert, int horiz)
{
	int 	height;
	int 	width; 
	int 	b; 
	char	*box;

	box = (char *)malloc(sizeof(char) * (horiz + 1) * vert + 1);
	height = 0;
	b = 0;
	while (height <= vert - 3)
	{
		box[b++] = 'B';
		width = 0;
		while (width < horiz - 2)
		{
			box[b++] = ' ';
			width++;
		}
		if (horiz > 1)
			box[b++] = 'B';
		box[b++] = '\n';
		height++;
	}
	box[b] = '\0';
	return (box);
}
