/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 23:10:53 by alakhani          #+#    #+#             */
/*   Updated: 2019/10/26 23:17:03 by alakhani         ###   ########.fr       */
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
	return (h);
}

int	ft_is_prime(int nb)
{
	int max;
	int	possible_prime1;
	int possible_prime2;
	int n;

	n = 1;
	possible_prime1 = 5;
	if (nb == 2 || nb == 3 || nb == 5)
		return (1);
	else if (nb <= 1 || nb % 2 == 0 || nb % 3 == 0)
		return (0);
	max = ft_approximate_sqrt(nb);
	while (possible_prime1 <= max)
	{
		possible_prime1 = 6 * n - 1;
		possible_prime2 = possible_prime1 + 2;
		if (nb % possible_prime1 == 0 || nb % possible_prime2 == 0)
			return (0);
		n++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int n;

	n = 0;
	while (!ft_is_prime(nb + n))
		n++;
	return (nb + n);
}
