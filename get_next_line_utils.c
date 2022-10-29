/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaizkafernandezribeiro <gaizkafernandez    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:36:36 by gaizkaferna       #+#    #+#             */
/*   Updated: 2022/10/29 13:18:29 by gaizkaferna      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

size_t ft_strlen(const char *str)
{
    size_t len;

    len = 0;
    while(str[len])
        len++;
        return (len);
}

int main(void)
{
    char    *src = "Bichaco";
    printf("%zu", ft_strlen(src));
	return (0);
}