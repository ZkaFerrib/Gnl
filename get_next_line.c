/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafernan <gafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:51:55 by gafernan          #+#    #+#             */
/*   Updated: 2022/11/08 12:57:22 by gafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/* char	*get_next_line(int fd)
{
	char	buf[10];
	ssize_t	nr_bytes;

	fd = open("/Users/gaizkafernandezribeiro/Desktop/42/Gnl/Gnl/text.txt", O_RDONLY);
	if (fd == -1)
	{
		return(NULL);
	}
	else
	{
		nr_bytes = read(fd, buf, 5);
        close(fd);
	}
    if(nr_bytes == 0)
    {
        printf("Archivo vacio");
    }
    else
    {
        printf("El numero de caracteres es %d, El contenido es %s \n", (int)nr_bytes, buf);
    }
	return 0;
}

 */
