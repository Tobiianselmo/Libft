/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:15:44 by tanselmo          #+#    #+#             */
/*   Updated: 2023/12/01 12:40:48 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		while (s[i + 1] != '\0')
		{
			i++;
		}
		while (s[i] != c)
		{
			i--;
			if (i == 0)
			{
				return (NULL);
			}
		}
		if (s[i] == c)
		{
			return ((char *)&s[i]);
		}
	}
	return (NULL);
}

/* int	main()
{
	char	*s;
	int	c;

	s = "Hola como estas?";
	c = ' ';
	printf("%s\n", ft_strrchr(s, c));
	return (0);
} */
