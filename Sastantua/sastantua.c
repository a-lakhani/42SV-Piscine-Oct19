/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 21:59:07 by alakhani          #+#    #+#             */
/*   Updated: 2019/10/27 23:47:07 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		total_lines(int n)
{
	int section_lines;

	section_lines = n + 2;
	if (n == 1)
		return (3);
	else
	{
		return (total_lines(n - 1) + section_lines);
	}
}

int		hdiff(int n)
{
}

int		start_width(int n)
{
	int hdiff;

	hdiff = hdiff(n);
	if (n == 1)
		return (1);
	else
		return (max_width(n - 1) + hdiff);
}

int		max_width(int n)
{
	int	hdiff;

	if (n == 1)
		return (5);

	if (n % 2)
		return (n + 4);
	else
		return (n + 3);
	else
		return (start_width(n - 1) + n + 1);
}

void	print_middle(int n)
{
	int	start_width;
	int	hdiff;
	int	end_width;
	int	total_section_lines;
	int	current_section_line;
	
	total_section_lines = 2 + n;
	current_section_line = 0;
	hdiff = 3 + n / 2;
	if (n == 1)
		start_width = 1;
	else
		start_width = max_width(n - 1) + hdiff;

		while(start_width < end_width)
		{
			ft_putchar('*');
		};
}

int		main(void)
{
	print_middle(

}
