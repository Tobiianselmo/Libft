/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:16:20 by tanselmo          #+#    #+#             */
/*   Updated: 2023/12/06 14:47:01 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
}

int	main()
{
	char	s;
	int	c;

	s = "Hola buen dia!";
	c = 'b';
	printf("%s\n", ft_memchr(s, c, 3));
	return (0);
}