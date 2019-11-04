/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 12:31:29 by alakhani          #+#    #+#             */
/*   Updated: 2019/11/03 17:46:57 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	*word_lengths(char **s, int *lengths, int len)
{
	int		i;

	i = 0;
	while (s[i][0])
	{
		lengths[i] = ft_strlen(s[i]);
		i++;
	}
}

void	*ft_strncpy(char *s, char *q, int len)
{
	int		i;

	i = 0;
	while (i < len)
	{
		q[i] = *(s + i);
		i++;
	}
}

void	**ft_split_stars(char *s, char **q, int len)
{
	char	words[len][len];
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	words = {0};
	while (s[i])
	{
		if (s[i] == '*' && (i ? s[i - 1] != '*' : 1))
			words[k][0] = '*';
		while (s[i] != '*' && s[i]) 
			words[k][j++] = s[i++];
		j = 0;
		k++;
	}
	return (words);
}

int		match(char *s1, *s2)
{
	char	**words;
	int		*lengths;
	int		i;
	
	words = ft_split_stars(s2, ft_strlen(s2));
	lengths = word_lengths(s2, ft_strlen(s2));
	return (0);
}

int		main(void)
{
	char	s;
	char	**words;
	int		lengths;
	int		len;

	s = "*well*does this:wo**rk*?*";
	len = ft_strlen(s);
	words = ft_split_stars(s, len);
	lengths = word_lengths(s, len);
	for (i = 0; i < len && words[i++][0];)
		printf("%s\t", words[i]);
	printf("\n");
	for (i = 0; i < len && lengths[i++];)
		printf("%d\t", lengths[i]);
	return (0);
}
