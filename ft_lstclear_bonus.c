/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchy <nbuchy@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 17:58:27 by nbuchy            #+#    #+#             */
/*   Updated: 2025/10/27 15:27:06 by nbuchy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*ptr;

	temp = *lst;
	ptr = *lst;
	while (ptr != NULL)
	{
		temp = ptr;
		ptr = ptr->next;
		ft_lstdelone(temp, del);
	}
	*lst = NULL;
}
