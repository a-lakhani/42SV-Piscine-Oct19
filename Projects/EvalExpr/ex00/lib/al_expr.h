/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   al_expr.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 21:23:18 by alakhani          #+#    #+#             */
/*   Updated: 2019/11/10 23:29:46 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AL_EXPR_H
# define AL_EXPR_H

# include "al_string.h"

typedef struct	s_splice
{
	char	*begin;
	char	*middle;
	char	*end;
}				t_splice;

int     my_atoi(char *s);
int     rev_atoi(char *start_of_string, char *current_index);
char    *my_itoa(int b);
char	*parse_paren(char *in);
void	find_parens(t_splice *f_norm);
void	paren_splice(t_splice *f_norm);

#endif
