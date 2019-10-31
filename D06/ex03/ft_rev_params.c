/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 23:12:05 by alakhani          #+#    #+#             */
/*   Updated: 2019/10/30 23:17:11 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int		n;
	char	*param;

	n = argc - 1;
	while (n > 0)
	{
		param = argv[n];
		while (*param != '\0')
			ft_putchar(*param++);
		ft_putchar('\n');
		n--;
	}
	return (0);
}
