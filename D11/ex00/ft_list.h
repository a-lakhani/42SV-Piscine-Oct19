/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 16:09:55 by alakhani          #+#    #+#             */
/*   Updated: 2019/11/06 16:13:31 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


typedef	struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;
