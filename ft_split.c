/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:49:16 by tanselmo          #+#    #+#             */
/*   Updated: 2023/12/14 17:56:27 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	if (!str[i])
		return (0);
	if (str[i] != c)
		count = 1;
	else if (str[i] == c)
		count = 0;
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c && str[i + 1])
			count++;
		i++;
	}
	return (count);
}

static char	*makestring(const char *str, int start, int len)
{
	int		i;
	char	*s;

	i = 0;
	s = (char *)malloc(sizeof(char) * (len + 1));
	while (!s)
		return (0);
	while (len--)
	{
		s[i] = str[start];
		i++;
		start++;
	}
	s[i] = '\0';
	return (s);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	int		i;
	int		j;
	int		len;
	int		start;

	i = 0;
	j = 0;
	len = ft_strlen(s);
	start = -1;
	matrix = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!matrix)
		return (NULL);
	while (i <= len)
	{
		if (s[i] != c && start == -1)
			start = i;
		else if ((s[i] == c || i == len) && start != -1)
		{
			matrix[j] = makestring(s, start, (i - start));
			j++;
			start = -1;
		}
		i++;
	}
	matrix[j] = 0;
	return (matrix);
}

/* int	main()
{
	char	*s = "bbbHolabbbcomobbbestas?bbbaaaaa";
	char c = 'b';
	int		i;
	char	**str;
	
	i = 0;
	str = ft_split(s, c);
	while (i < count_words(s, c))
	{
		printf("%s\n", str[i]);
		i++;
	}
	return (0);
} */
