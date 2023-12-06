/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:15:56 by tanselmo          #+#    #+#             */
/*   Updated: 2023/12/04 18:25:52 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	src_len = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (src_len);
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

/* int	main()
{
	char	dst[] = "Holaaaaaaaaaaaa";
	char	src[] = "Buen dia";

	printf("la primera palabra %s, la segunda es %s\n", dst, src);
	printf("%zu\n", ft_strlcpy(dst, src, 6));
	printf("la primera palabra %s, la segunda es %s\n", dst, src);
	return (0);
} */
