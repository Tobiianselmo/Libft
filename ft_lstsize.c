/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanselmo <tanselmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 13:03:50 by tanselmo          #+#    #+#             */
/*   Updated: 2023/12/20 15:05:44 by tanselmo         ###   ########.fr       */
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

/* int main()
{
	t_list *l;
	int actual;

	l = ft_lstnew(ft_strdup("1"));
	l->next = ft_lstnew(ft_strdup("5"));
	l->next = ft_lstnew(ft_strdup("10"));
	actual = ft_lstsize(l);
	printf("%d", actual);
} */