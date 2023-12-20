/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:30:25 by tanselmo          #+#    #+#             */
/*   Updated: 2023/12/20 11:44:07 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*new_str(int n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;
	char	*result;

	if (!s)
		return (NULL);
	str = new_str(ft_strlen(s));
	if (!str)
		return (NULL);
	i = 0;
	result = str;
	while (*s)
		*str++ = f(i++, *s++);
	*str = '\0';
	return (result);
}

/* char transform(unsigned int index, char c)
{
    index = 0;
	if (c >= 'a' && c <= 'z')
	{
    	return (c - 32);
    }
    return (c);
}

int main() {
    char original[] = "Argentina";
    char *result;

    printf("%s\n", original);
    result = ft_strmapi(original, &transform);
    printf("%s\n", result);
    return 0;
} */