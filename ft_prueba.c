/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prueba.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 12:20:44 by tanselmo          #+#    #+#             */
/*   Updated: 2023/12/01 13:31:04 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
    if (dstsize > 0)
	{
    	while (src[i] != '\0' && i < dstsize - 1)
		{
        	dst[i] = src[i];
        	i++;
        }
        dst[i] = '\0';
    }
    while (src[i] != '\0') {
        i++;
    }
    return (i);
}

int main() {
    char dst[] = "Hola";
    const char src[] = "Buenos dias";
	printf("%zu\n", ft_strlcpy(dst, src, 5));
	printf("%s\n", dst);
    return (0);
}
