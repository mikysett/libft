/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 12:23:53 by msessa            #+#    #+#             */
/*   Updated: 2021/01/16 13:20:16 by msessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;
	size_t	tot_size;

	tot_size = nmemb * size;
	if(!nmemb || !size
		|| !(res = malloc(tot_size)))
		return (malloc(0));
	while (tot_size-- > 0)
		*(unsigned char *)(res + tot_size) = 0;
	return (res);
}
