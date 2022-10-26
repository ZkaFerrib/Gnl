/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebas.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafernan <gafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:51:55 by gafernan          #+#    #+#             */
/*   Updated: 2022/10/26 14:46:20 by gafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int		fd;
	char	buf[10];
	size_t	nr_bytes;

	fd = open("/Users/gafernan/Desktop/Gnl/text", O_RDONLY);
	if (fd == -1)
	{
		printf("Error al abrir el archivo\n");
	}
	else
	{
		nr_bytes = read(fd, buf, 5);
	}
	return (0);
}
