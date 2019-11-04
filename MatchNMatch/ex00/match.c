/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 12:31:29 by alakhani          #+#    #+#             */
/*   Updated: 2019/11/03 17:12:30 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		*word_lengths(char **s, int len)
{
	int		i;
	int		lengths[len];

	i = 0;
	lengths = { 0 };
	while (s[i])
		lengths[i] = ft_strlen(s[i++]);
	return (lengths);
}

char	*ft_strncpy(char *s, int len)
{
	char	buffer[len];
	int		i;

	i = 0;
	while (i < len)
	{
		buffer[i] = *(s + i);
		i++;
	}
	return (buffer);
}

char	**ft_split_stars(char *s, int len)
{
	char	words[len][len];
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	words[][]={ 0 };
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
	int		i;




}
