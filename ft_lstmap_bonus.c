/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchy <nbuchy@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 09:40:48 by nbuchy            #+#    #+#             */
/*   Updated: 2025/10/27 11:19:12 by nbuchy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*ptr;
	t_list	*new;

	if (lst == NULL)
		return (NULL);
	ptr = lst;
	start = ft_lstnew((*f)(ptr->content));
	if (start == NULL)
		ft_lstclear(&start, del);
	ptr = ptr->next;
	while (ptr != NULL)
	{
		new = ft_lstnew((*f)(ptr->content));
		if (new == NULL)
			ft_lstclear(&start, del);
		ft_lstadd_back(&start, new);
		ptr = ptr->next;
	}
	return (start);
}
