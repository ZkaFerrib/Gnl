/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaizkafernandezribeiro <gaizkafernandez    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:36:36 by gaizkaferna       #+#    #+#             */
/*   Updated: 2022/11/16 14:48:01 by gaizkaferna      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strchr(char *str, int c)
{
	int		i;

	i = 0;
	if (!str)
		return (NULL);
	if (c == '\0')
		return (&str[i]);
	while (str[i])
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char		*str;
	int			i;
	int			n;
	int			size;

	if (!s1)
	{
		s1 = (char *)malloc(1 * sizeof(char));
		s1[0] = '\0';
	}
	size = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	i = -1;
	n = 0;
	while (s1[++i])
		str[i] = s1[i];
	while (s2[n])
		str[i++] = s2[n++];
	str[size] = '\0';
	free(s1);
	return (str);
}