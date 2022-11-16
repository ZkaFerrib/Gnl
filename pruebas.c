/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebas.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaizkafernandezribeiro <gaizkafernandez    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:51:55 by gafernan          #+#    #+#             */
/*   Updated: 2022/11/15 15:37:48 by gaizkaferna      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*char    *get_next_line(int fd)
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
 */

/* char	ft_gnl(int fd)
{
	char	buf[100];
	ssize_t	nr_bytes;

	while (fd < 0 || BUFFER_SIZE < 0)
		return (NULL);
	
} */

/* static char	*ft_readline(int fd, char *save, char *buffer)
{
	ssize_t	len;

	len = 1;

	while (len > 0)
		len = read(fd, buffer, BUFFER_SIZE);
		if (len == -1)
		{
			free(buffer);
			return (NULL);
		}
		if (len)

	
} */

char	*ft_read(int fd)
{
	char		*buf;
	int		    a;
	ssize_t	    nr_bytes;
    int         i;

    i = 0;

	fd = open ("/Users/gafernan/Desktop/Gnl/Gnl/text", O_RDONLY);
	if (fd == -1)
		    return (NULL);
	    else
		    nr_bytes = read (fd, buf, 5);
    while(buf[i] && buf[i] != '\n')
    {
	    if (nr_bytes == 0)
		    printf ("Archivo vacio");
	    else
	    {
		    printf ("El contenido %s \n", buf);
	    }
	    if (nr_bytes == a)
		    return (0);
        i++;
    }
	close(fd);
}
