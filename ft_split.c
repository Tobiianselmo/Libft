/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:49:16 by tanselmo          #+#    #+#             */
/*   Updated: 2023/12/13 18:14:30 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* static int count_words(char const *str, char c)
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
} */
static int count_letters(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!str[i])
		return (0);
	while (str[])
	while (str[i++] != c)
		count++;
	return (count);
}

/* char	**ft_split(char const *s, char c)
{
	int		i;
	int		count;
	char	**a;
	*a = (char **)malloc(count);
	while(i < count)
	{
		a = (char *)malloc(count_letter(s) + 1)
		s++;
	}
	

	i = 0;
	count = count_words(s, c);
} */

int	main()
{
	char	*s = " Hola como estas?";
	char c = ' ';

	printf("%d\n", count_letters(s, c));
	return (0);
}
