/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 17:25:29 by alakhani          #+#    #+#             */
/*   Updated: 2019/10/26 19:13:19 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	i = power;
	result = 1;
	if (power < 0)
	{
		return (0);
	}
	else if (power = 0)
	{
		return (1);
	}
	while (i > 0)
	{
		result = result * nb;
		i--;
	}
	return (result);
}
