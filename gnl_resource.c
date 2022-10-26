/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_resource.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafernan <gafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:35:15 by gafernan          #+#    #+#             */
/*   Updated: 2022/10/24 15:16:30 by gafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <stddef.h>
#include "get_next_line.h"

int	ft_strlen(const char *s)
{
	int	x;

	x = 0;
	while (s[x])
		x++;
	return (x);
}

int	checkline(char *array)
{
	int	z;
	int	check;

	z = 0;
	check = 0;
	while (array[z])
	{
		if (array[z] = '\n')
			return (1);
		z++;
	}
	return (-1);
}

int	ft_strjoin(char *s1, char *s2)
{
	int		x;
	char	*ptr;
	int		y;

	y = 0;
	x = 0;
	ptr = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!ptr)
		return (NULL);
	while (s1[x])
	{
		ptr[x] = s1[x];
		x++;
	}
	while (s2[y])
	{
		ptr[x] = s2[y];
		x++;
		y++;
	}
	free(s1);
	ptr[x] = '\0';
	return (ptr);
}