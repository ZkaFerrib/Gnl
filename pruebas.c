/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebas.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaizkafernandezribeiro <gaizkafernandez    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:51:55 by gafernan          #+#    #+#             */
/*   Updated: 2022/10/29 13:22:48 by gaizkaferna      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char    *get_next_line(int fd)
{
	char	buf[90];
	ssize_t	nr_bytes;

    while(ft_strlen != '0')

	if (fd == -1)
	{
		return(NULL);
	}
	else
	{
		nr_bytes = read(fd, buf, 30);
        close(fd);
	}
    if(nr_bytes == 0)
    {
        printf("Archivo vacio");
    }
    else
    {
        printf("El numero de caracteres es: %d \nEl contenido es: %s \n", (int)nr_bytes, buf);
    }
	return 0;
}
