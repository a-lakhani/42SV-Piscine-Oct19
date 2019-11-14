/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 20:00:59 by alakhani          #+#    #+#             */
/*   Updated: 2019/11/11 17:52:13 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	my_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		my_putchar(str[i++]);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_string.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 20:50:57 by alakhani          #+#    #+#             */
/*   Updated: 2019/11/11 16:39:18 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/al_string.h"

char	*ft_reverse_string(char *s)
{
	char	*k;
	int		len;
	int		a;
	int		b;

	b = 0;
	len = ft_strlen(s);
	a = len - 1;
	k = (char *)malloc(sizeof(char) * len);
	while (b < len)
		k[b++] = s[a--];
	k[b] = 0;
	return (k);	
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespace.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 20:32:16 by alakhani          #+#    #+#             */
/*   Updated: 2019/11/10 21:05:26 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/al_string.h"

char	*ft_split_whitespace(char *s)
{
	int		i;
	char	*k;
	int		len;
	char	a;
	int		kcount;

	i = 0;
	kcount = 0;
	len = ft_strlen(s);
	k = (char *)malloc(sizeof(char) * len);
	while (i < len)
	{
		a = s[i];
		if (a != ' ' && a != '\t' && a != '\n')
		{
			k[kcount] = s[i];
			kcount++;
		}
		i++;
	}
	return (k);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 21:31:06 by alakhani          #+#    #+#             */
/*   Updated: 2019/11/11 16:56:30 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/al_string.h"

char	*ft_strcat(char *a, char *b)
{
	char	*cat;
	int		len1;
	int		len2;

	len1 = ft_strlen(a);
	len2 = ft_strlen(b);
	cat = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	cat = ft_strcpy(a, cat);
	cat = ft_strcpy(b, cat + len1);
	return (cat - len1);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 20:37:11 by alakhani          #+#    #+#             */
/*   Updated: 2019/10/30 21:50:14 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 21:37:33 by alakhani          #+#    #+#             */
/*   Updated: 2019/11/11 16:57:08 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/al_string.h"

char	*ft_strcpy(char *src, char *dest)
{
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(src);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 21:22:05 by alakhani          #+#    #+#             */
/*   Updated: 2019/11/10 16:12:11 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	int		len;
	char	*copy;
	int		i;

	i = 0;
	len = ft_strlen(src);
	copy = NULL;
	if (len == 0)
		return (copy);
	else
		copy = malloc(len);
	while (len)
	{
		copy[i] = src[i];
		if (src[i] == '\0')
			break ;
		i++;
	}
	return (copy);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 20:33:35 by alakhani          #+#    #+#             */
/*   Updated: 2019/10/30 20:35:31 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 20:04:38 by alakhani          #+#    #+#             */
/*   Updated: 2019/11/10 16:11:15 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	my_putchar(char c)
{
	write(1, &c, 1);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skip_whitespace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 13:33:38 by alakhani          #+#    #+#             */
/*   Updated: 2019/11/10 16:10:35 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*skip_whitespace(char *s)
{
	char	*p;

	p = s;
	while ((*p == ' ' || *p == '\t' || *p == '\n') && *p)
		p++;
	return (p);
}
