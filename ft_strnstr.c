/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:15:48 by tanselmo          #+#    #+#             */
/*   Updated: 2023/11/30 11:31:42 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	a;

	i = 0;
	a = 0;
	while (haystack[i] != '\0')
	{
		if (needle[0] == '\0')
		{
			return ((char *)&haystack[i]);
		}
		if (haystack[i] == needle[a])
		{
			i++;
			a++;
			if (needle[a] == '\0' || a == len)
				return ((char *)&haystack[i - a]);
		}
		else
		{
			i++;
			a = 0;
		}
	}
	return (NULL);
}

/* int	main()
{
	const char	*haystack;
	const char	*needle;

	haystack = "Hola como estas?";
	needle = "cono";
	printf("%s\n", ft_strnstr(haystack, needle, 2));
	return (0);
} */
