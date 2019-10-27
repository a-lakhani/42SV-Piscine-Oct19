/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 20:08:13 by alakhani          #+#    #+#             */
/*   Updated: 2019/10/26 22:11:35 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_approximate_sqrt(int n)
{
	int w;
	int h;

	h = 1;
	w = n;
	while (w > h)
	{
		w /= 2;
		h *= 2;
	}
	return (w);
}

int	ft_sqrt(int nb)
{
	int guess;

	if (nb < 1)
		return (0);
	else
		guess = ft_approximate_sqrt(nb);
	while (guess * guess < nb)
		guess++;
	if (guess * guess == nb)
		return (guess);
	else
		return (0);
}
