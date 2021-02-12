/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_ft_lstclear.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 16:24:35 by msessa            #+#    #+#             */
/*   Updated: 2021/01/18 16:28:51 by msessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus_libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*curr;
	t_list	*next;

	curr = *lst;
	while (curr)
	{
		next = curr->next;
		del(curr->content);
		free(curr);
		curr = next;
	}
	*lst = 0;
}