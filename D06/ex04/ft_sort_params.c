/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 23:23:19 by alakhani          #+#    #+#             */
/*   Updated: 2019/10/31 00:23:17 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	char	c1;
	char	c2;
	int		i;

	i = 0;
	c1 = s1[i];
	c2 = s2[i];
	while (c1 == c2)
	{
		i++;
		c1 = s1[i];
		c2 = s2[i];
	}
	return (c1 - c2);
}

void	ft_swap_string(char *a, char *b)
{
	char *swap;

	swap = a;
	a = b;
	b = swap;
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		ft_putchar(str[i++]);
}

int		main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (i < argc)
	{
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				ft_swap_string(argv[i], argv[j]);
				i = 0;
				break ;
			}
			j++;
		}
		i++;
		j = i;
	}
	while (i < argc)
		ft_putstr(argv[i++]);
	return (0);
}
