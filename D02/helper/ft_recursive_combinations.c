/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 22:24:49 by alakhani          #+#    #+#             */
/*   Updated: 2019/10/24 23:16:41 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

void	ft_print_digit(int digit)
{
		ft_putchar(digit + 48);
};

/*
void	ft_print_series(int value, int series_length)
{
		int i;
		
		i = 0;

		while(i < series_length)
		{
			ft_print_digit(value);
			i++;
		};

};
*/

void	ft_increment(int i)
{
		int j;
		
		j = i + 1;

		if (j<10)
		{
			ft_print_digit(j);
		};

};

void 	ft_inception(int n)
{
		int levels;
		int current_value;

		levels = 0;
		current_value = 0;

		while (levels < n)
		{
			ft_print_digit(current_value);
			current_value++;
			levels++;
		};

		
};

int		main(void)
{
//		ft_increment(6);

		ft_inception(3);	
};

