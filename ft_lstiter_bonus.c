/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:45:42 by tanselmo          #+#    #+#             */
/*   Updated: 2023/12/21 16:37:32 by tanselmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*new;

	if (lst != NULL && f != NULL)
	{
		while (lst != NULL)
		{
			new = (lst)->next;
			f(lst->content);
			lst = new;
		}
	}
}

/* int main()
{
	return (0);
} */