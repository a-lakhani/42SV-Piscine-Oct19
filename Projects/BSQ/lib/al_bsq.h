/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   al_bsq.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 17:05:52 by alakhani          #+#    #+#             */
/*   Updated: 2019/11/12 21:31:16 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AL_BSQ_H
# define AL_BSQ_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>

typedef struct		s_point
{
	int				x;
	int				y;
	struct s_point	*next;
}					t_point;

typedef struct		s_square
{
	t_point			*origin;
	int				width;
	t_point			*next;
}					t_square;

char	*read_box_file(int current_filedes, char *filename);
int		box_file_size(int infile);
int		my_atoi(char *s);
void	add_point(t_point **head, int x, int y);
int		first_num_length(char *s);
void    box_from_stdin(char *buffer, int bytes_read, int width,
	   		int first_num_length);
#endif
