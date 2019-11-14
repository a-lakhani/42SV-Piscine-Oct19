/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 10:51:27 by alakhani          #+#    #+#             */
/*   Updated: 2019/11/12 20:49:31 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/al_expr.h"
#include "../../lib/al_string.h"

int		my_atoi(char *s)
{
	int		num;
	int		base;
	int		sign;
	int		i;
	int		d;

	num = 0;
	i = 0;
	sign = 1;
	base = 1;
	s = skip_whitespace(s);
	if (s && *s == '-')
		sign = -1;
	s = skip_whitespace(s++);
	while (s[i] >= '0' && s[i] <= '9')
		i++;
	while (--i >= 0)
	{
		d = s[i] - '0';
		num += d * base;
		base *= 10;
		i--;
	}
	return (num * sign);
}

int		rev_atoi(char *start_of_string, char *current_index)
{
	int		num;
	int		base;
	int		sign;
	int		i;
	int		d;

	num = 0;
	i = 0;
	base = 1;
	while ((*current_index == ' ' || *current_index == '\t') && current_index >= start_of_string)
		current_index--;
	while (*(current_index - i) >= '0' && *(current_index - i) <= '9')
	{
		d = *(current_index - i) - '0';
		num += d * base;
		base *= 10;
		i++;
	}
	sign = check_sign(start_of_string, current_index - i);
	return (num * sign);
}

int		check_sign(char *start_of_string, char *current_index)
{
	char	*z;

	z = current_index;
	while (z >= start_of_string)
	{
		if ((*z >= '0' && *z <= '9') || *z == ')')
			return (1);
		else if (*z == '+' || *z == '-' || *z == '/' || *z == '*' || *z == '%' || *z == '(')
			return (-1);
		else
			z--;
	}
	return (-1);
}

char	*my_itoa(int b)
{
	char	*temp;
	char	*rev;
	int		i;

	i = 0;
	temp = (char *)malloc(sizeof(char) * 10);
	temp[0] = '0';
	while (b % 10)
	{
		temp[i++] = b % 10 + '0';
		b /= 10;
	}
	temp[i] = 0;
	rev = ft_reverse_string(temp);
	free(temp);
	return (rev);
}

int		first_num_length(char *s)
{
	int		i;

	i = 0;
	s = skip_whitespace(s);
	if (s && *s == '-')
		s = skip_whitespace(s++);
	while (s[i] >= '0' && s[i] <= '9')
		i++;
	return (i);
}

