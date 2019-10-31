/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 22:50:39 by alakhani          #+#    #+#             */
/*   Updated: 2019/10/30 22:59:00 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int		n;
	char	*param;

	n = 1;
	while (n < argc)
	{
		param = argv[n];
		while (*param != '\0')
			ft_putchar(*param++);
		ft_putchar('\n');
		n++;
	}
	return (0);
}
