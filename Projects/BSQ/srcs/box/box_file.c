/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   box_file.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 17:09:12 by alakhani          #+#    #+#             */
/*   Updated: 2019/11/12 21:30:39 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/al_bsq.h"

char	*read_box_file(int current_filedes, char *filename)
{
	char	*out;
	int		size;
	char	*swap;
	int		dummy;

	out = (char *)malloc(sizeof(char) * 12);
	size = box_file_size(current_filedes);
	if (!size)
	{
		free(out);
		return (NULL);
	}
	else
	{
		swap = (char *)malloc(sizeof(char) * size);
		current_filedes = open(filename, O_RDONLY);
		dummy = read(current_filedes, swap, size);
		if (!dummy)
		{
			free(out);
			free(swap);
			return (NULL);
		}
		else
		{
			swap[size - 1] = 0;
			free(out);
			return (swap);
		}
	}
}

int		box_file_size(int infile)
{
	char	*in;
	int		count;
	int		size;

	in = malloc(8);
	count = read(infile, in, 8);
	size = (atoi(in) * atoi(in) + first_num_length(in) + 5);
	free(in);
	close(infile);
	if (count <= 0)
		return (0);
	else
		return (size);
}

void	box_from_stdin(char *buffer, int bytes_read, int width,
	   		int first_num_length)
{
	int		bytes_to_read;
	int		dummy;

	bytes_to_read = width * (width + 1) + first_num_length + 5 -
		bytes_read;
	dummy = read(0, buffer + bytes_read, bytes_to_read);
}
