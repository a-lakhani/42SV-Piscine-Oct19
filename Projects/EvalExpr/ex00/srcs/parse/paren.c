/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paren.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 21:47:41 by alakhani          #+#    #+#             */
/*   Updated: 2019/11/10 23:29:51 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "al_expr.h"

char	*parse_paren(char *in)
{
	t_splice	*str;

	str = (t_splice *)malloc(sizeof(t_splice *));
	str->begin = in;
	str->middle = NULL;
	str->end = NULL;
	find_paren(str);
	paren_splice(str);
	return (str->begin);
}

void	find_parens(t_splice *f_norm)
{
	int			i;
	char		*in;

	in = f_norm->begin;
	while (in[i])
	{
		if (in[i] == '{' || in[i] == '[' || in[i] == '(')
		{
			f_norm->middle = (char *)malloc(sizeof(char) * (ft_strlen(in) - i));
			f_norm->middle = parse_paren(in + i + 1);
		}
		else if (in[i] == '}' || in[i] == ']' || in[i] == ')')
		{
			f_norm->end = (char *)malloc(sizeof(char) * (ft_strlen(in) - i));
			f_norm->end = parse_paren(in + i + 1);
		}
		if ((in[i] == '{' || in[i] == '[' || in[i] == '(') ||
				(in[i] == '}' || in[i] == ']' || in[i] == ')'))
			in[i] = 0;
		i++	
	}
}

void	paren_splice(t_splice f_norm)
{
	if (f_norm->middle && (f_norm->end ? *(f_norm->end) : f_norm->end))
	{
		f_norm->begin = ft_strcat(ft_strcat(
					f_norm->begin, evalexpr(middle)), end);
	}
	else if (f_norm->middle && !f_norm->end)
		f_norm->begin = ft_strcat(f_norm->begin, evalexpr(f_norm->middle));
	else
		return ;
}
