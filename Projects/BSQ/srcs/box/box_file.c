/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   box_file.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 17:09:12 by alakhani          #+#    #+#             */
/*   Updated: 2019/11/13 20:43:19 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../../lib/al_bsq.h"

char	*read_box_file(char *filename)
{
	char	*out;
	int		size;
	int		f;

	size = box_file_size(filename);
	if (!size)
		return (NULL);
	else
	{	
		out = (char *)malloc(sizeof(char) * size + 1);
		f = open(filename, O_RDONLY); 
		if (read(f, out, size))
		{
			printf("filesize corect\n");
			out[size] = 0;
			close(f);
			return (out);
		}
		else
		{
			printf("filsesize ain't right\n");
			close(f);
			return (NULL);
		}
	}
}

int		box_file_size(char *filename)
{
	char	*in;
	int		count;
	int		size;
	int		f;

	in = malloc(8);
	f = open(filename, O_RDONLY);
	count = read(f, in, 8);
	size = (atoi(in) * (atoi(in) + 1) + first_num_length(in) + 4);
	free(in);
	close(f);
	if (count <= 0)
		return (0);
	else
		return (size);
}

int		box_width(char *filename)
{
	char	*in;
	int		count;
	int		size;
	int		f;

	f = open(filename, O_RDONLY);
	in = malloc(8);
	count = read(f, in, 8);
	if (count <= 0)
		size = 0;
	else
		size = my_atoi(in);
	free(in);
	close(f);
	return (size);
}

int		first_line_length(char *s)
{
	int		i;

	i = 0;
	while (s[i] != '\n')
		i++;
	return (i);
}

void	box_from_stdin(char *buffer, int bytes_read, int width,
	   		int first_num_length)
{
	int		bytes_to_read;
	int		dummy;

	bytes_to_read = width * (width + 1) + first_num_length + 4 -
		bytes_read;
	dummy = read(0, buffer + bytes_read, bytes_to_read);
}
