/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 19:48:17 by alakhani          #+#    #+#             */
/*   Updated: 2019/10/31 20:54:35 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_print_24_as_12(int time)
{
	int	hour;
	int	minute;
// needs more work on figuring out 00, 12, 24, digit padding
	hour = time / 100;
	minute = time % 100;
	if (hour == 0)
		hour = 12;
	printf(" %d.", hour % 12);
	printf("%02d", minute);
	if (hour / 12 == 1)
		printf(" P.M.");
	else
		printf(" A.M.");
	return (0);
}

void	ft_takes_place(int hour)
{
	if (hour > 2400 || hour < 0 || hour % 100 > 59)
		return ;
	printf("THE FOLLOWING TAKES PLACE BETWEEN");
	ft_print_24_as_12(hour);
	printf(" and");
	ft_print_24_as_12(hour + 100);
}

int		main(void)
{
	ft_print_24_as_12(2359);
	printf("\n");
	ft_print_24_as_12(1159);
	printf("\n");
	ft_print_24_as_12(1100);
	printf("\n");
	ft_print_24_as_12(1203);
	return (0);
}
