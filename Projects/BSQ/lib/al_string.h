/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   al_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 21:04:17 by alakhani          #+#    #+#             */
/*   Updated: 2019/11/11 16:56:27 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AL_STRING_H
# define AL_STRING_H

# include <unistd.h>
# include <stdlib.h>

void	my_putchar(char c);
void	ft_putstr(char *s);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strdup(char *s);
int		ft_strlen(char *s);
char	*skip_whitespace(char *s);
char	*ft_split_whitespace(char *s);
char	*ft_reverse_string(char *s);
char	*ft_strcpy(char *src, char *dest);
char	*ft_strcat(char *a, char *b);

#endif
