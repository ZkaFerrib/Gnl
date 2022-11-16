/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaizkafernandezribeiro <gaizkafernandez    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:51:55 by gafernan          #+#    #+#             */
/*   Updated: 2022/11/16 14:18:56 by gaizkaferna      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int ft_bucle(int fd);

int ft_leerfdl(const char *str);
int	main(void)
{
	char	buf[10];
	ssize_t	nr_bytes;
    int     fd;

    nr_bytes = 0;
	fd = open("/Users/gaizkafernandezribeiro/Desktop/42/Gnl/Gnl/text.txt", O_RDONLY);
	if (fd == -1)
	{
		return(0);
	}
	/* else
	{
		nr_bytes = read(fd, buf, BUFFER_SIZE);
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
    printf("El numero de caracteres es %d", ft_leerfdl(buf)); */
    printf("El numero de caracteres es %d\n", ft_bucle(fd));
    close(fd);
	return 0;
}

int ft_leerfdl(const char *str)
{
    int     len;
    
    len = 0;
    while(str[len] && str[len] !='\n')
    {
        write(1, &str[len], 1);
        len++;
    }
    return(len);
}

int ft_bucle(int fd)
{
    int     nr_bytes;
    char    *buffer;
    int     len;

    len = 0;
    buffer = malloc(sizeof (char) * BUFFER_SIZE);
    nr_bytes = 1;
    while(nr_bytes != 0)
    {
        nr_bytes = read(fd, buffer, BUFFER_SIZE);
        
        if (ft_leerfdl(buffer) != BUFFER_SIZE)
            nr_bytes = 0;
        //write(1, buffer, nr_bytes);
        len += nr_bytes;
    }
    return(len);
}