/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 22:15:22 by alakhani          #+#    #+#             */
/*   Updated: 2019/10/30 22:29:07 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	char *name;
	int n;

	n = argc;
	name = argv[0];
	while (*name != '\0')
		ft_putchar(*name++);
	return (0);
}
