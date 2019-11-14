/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 21:08:22 by alakhani          #+#    #+#             */
/*   Updated: 2019/11/10 21:29:04 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "al_expr.h"

int		do_op(int a, char *o, int b)
{
	if	(*o == '*')
		return (a * b);
	else if (*o == '/')
		return (a / b);
	else if (*o == '+')
		return (a + b);
	else if (*o == '-')
		return (a - b);
	else if (*o == '%')
		return (a % b);
	else
		return (-2147483640);
}

int		do_op_str(char *first, char *op, char *second)
{
	int		a;
	int		b;
	
	a = my_atoi(first);
	b = my_atoi(second;
	return (do_op(a, op, b));
}
