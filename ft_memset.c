/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:16:08 by tanselmo          #+#    #+#             */
/*   Updated: 2023/11/30 11:32:01 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

void *ft_memset(void *b, int c, size_t len) 
{
    char *p;
	p = b;
    while (len-- > 0) 
	{
    	*p++ = (char)c;
    }
    return (b);
}

int main()
{
	char cadena[] = "Hola, mundo!";
	printf("Cadena original: %s\n", cadena);
	printf("Cadena set: %p\n", ft_memset(cadena, '0', 3));
	return (0);
}
