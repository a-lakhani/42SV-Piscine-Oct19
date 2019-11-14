/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 15:47:54 by alakhani          #+#    #+#             */
/*   Updated: 2019/11/12 21:37:18 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../lib/al_bsq.h"
#include "../lib/al_expr.h"

int		main(int ac, char *av[])
{
	char	*in;
	int		f;
	int		fnum;
	char	*next_char;
	int		bytes_read;
	int		width;

	fnum = 1;
	in = NULL;
	f = 0;
	bytes_read = 0;
	next_char = malloc(10);
	if (ac > 1)
	{
		while (fnum < ac)
		{
			f = open(av[fnum], O_RDONLY);
			in = read_box_file(f, av[fnum++]);
		}
	}
	else
	{
		f = open(0, O_RDONLY);
		bytes_read = read(0, next_char, 10);
		close(f);
		width = my_atoi(next_char);
		in = malloc(width * (width + 1) +
				first_num_length(next_char) + 4);
		box_from_stdin(in, 10, width, first_num_length(next_char));
//		in[width * (width + 1) +
//				first_num_length(next_char) + 4] = 0;
	}
	printf("%s", in);
//	stdin needs to be read in one char at a time because there
//	is no end of file. read first char then calculate file size
//	else
//	{
//		f = open(av[f], O_RDONLY);
//		in = read_box_file(f);	
//	}
//	else
//	read from stdin
	return (0);
}
