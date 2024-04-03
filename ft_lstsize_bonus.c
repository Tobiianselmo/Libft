/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:45:07 by tanselmo          #+#    #+#             */
/*   Updated: 2023/12/21 13:45:10 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*new;
	int		size;

	new = lst;
	size = 0;
	while (new != NULL)
	{
		size++;
		new = new->next;
	}
	return (size);
}
