/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 16:14:04 by alakhani          #+#    #+#             */
/*   Updated: 2019/11/06 17:43:08 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
#include	"ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*boo;

	boo = ((t_list *)malloc(sizeof(t_list)));
	boo -> next = NULL;
	boo -> data = data;
	return (boo);
}