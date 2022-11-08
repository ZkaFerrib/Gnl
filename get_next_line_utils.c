/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafernan <gafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:36:36 by gaizkaferna       #+#    #+#             */
/*   Updated: 2022/11/08 14:37:33 by gafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (s[length])
			length++;
	return (length);
}

/* int main(void)
{
    char    *src = "Bichaco";
    printf("%zu", ft_strlen(src));
	return (0);
} */

char	*ft_strchr(const char *s, int c)
{
	unsigned char	p;

	p = c;
	while (*s != '\0' && *s != p)
		s++;
	if (*s == p)
		return ((char *)s);
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