/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 22:54:13 by alakhani          #+#    #+#             */
/*   Updated: 2019/11/08 23:15:52 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	t_list	*j;
	t_list	**next;

	if (!(*root))
	{
		j = btree_create_node(item);
		*root = j;
	}
	if (cmpf(j, *root) < 0)
	{
		*next = (*root)->left;
		btree_insert_data(next, item, cmpf);
	}
	else
	{
		*next = (*root)->right;
		btree_insert_data(next, item, cmpf);
	}
}
