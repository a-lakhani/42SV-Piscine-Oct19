/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   al_bsq.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 17:05:52 by alakhani          #+#    #+#             */
/*   Updated: 2019/11/13 20:34:46 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AL_BSQ_H
# define AL_BSQ_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>
# include "al_string.h"

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

char	*read_box_file(char *filename);
int		box_file_size(char *filename);
int		my_atoi(char *s);
void	add_point(t_point **head, int x, int y);
int		first_num_length(char *s);
void    box_from_stdin(char *buffer, int bytes_read, int width,
	   		int first_num_length);
int		box_width(char *filename);
int		first_line_length(char *s);
int		min_neighbors(int x, int y, char *max_boxes, int width);
void	replace_obstacles(char *max_boxes, char obstacle);
#endif
