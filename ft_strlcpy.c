/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:15:56 by tanselmo          #+#    #+#             */
/*   Updated: 2023/12/01 13:29:29 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	a;
	
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	a = 0;
	while (src[a] != '\0')
	{
		if (dstsize == '0')
		{
			return (src_len);
		}
		while (dstsize > (size_t)src[a])
		{
			dst[i] = src[a];
			i++;
			a++;
		}
		if (src[a] == '\0')
		{
			return (src_len + dst[i]);
		}
	}
	return (0);
}

int	main()
{
	char	dst[] = "Hola";
	char	src[] = "asasddsa";

	printf("%zu\n", ft_strlcpy(dst, src, 1));
	return (0);
}
