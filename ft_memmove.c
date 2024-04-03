/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:16:11 by tanselmo          #+#    #+#             */
/*   Updated: 2023/12/06 12:37:00 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*cdst;
	char	*csrc;

	cdst = (char *)dst;
	csrc = (char *)src;
	if (!dst && !src)
		return (0);
	if (dst <= src)
	{
		while (len--)
			*cdst++ = *csrc++;
	}
	else
	{
		cdst += len - 1;
		csrc += len - 1;
		while (len--)
		{
			*cdst-- = *csrc--;
		}
	}
	return (dst);
}
