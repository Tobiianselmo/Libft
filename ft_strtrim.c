/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:12:00 by tanselmo          #+#    #+#             */
/*   Updated: 2023/12/12 17:10:51 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char c, const char *set)
{
	while (*set)
		if (*set++ == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	const char		*start;
	const char		*end;
	char			*trim;
	size_t			i;

	if (!s1 || !set)
		return (NULL);
	start = s1;
	end = s1 + ft_strlen(s1) - 1;
	while (*start && ft_isset(*start, set))
		start++;
	while (end > start && ft_isset(*end, set))
		end--;
	trim = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!trim)
		return (NULL);
	i = 0;
	while (start <= end)
		trim[i++] = *start++;
	trim[i] = '\0';
	return (trim);
}

/* int	main()
{
	char const *s1 = "    Hola como estas?    ";
	char const *set = " ";

	printf("%s\n", ft_strtrim(s1, set));
	return (0);
} */
