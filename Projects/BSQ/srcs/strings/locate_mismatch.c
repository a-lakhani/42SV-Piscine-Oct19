/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   locate_mismatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 20:01:30 by alakhani          #+#    #+#             */
/*   Updated: 2019/11/12 20:11:46 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		locate_mismatch(char *s1, char *s2, int n)
{
	char	c1;
	char	c2;
	int		i;

	i = 0;
	c1 = s1[i];
	c2 = s2[i];
	while (c1 == c2 && i < (n - 1))
	{
		i++;
		c1 = s1[i];
		c2 = s2[i];
	}
	return (i);
}
