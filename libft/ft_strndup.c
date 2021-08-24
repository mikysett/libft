/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msessa <mikysett@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 13:19:55 by msessa            #+#    #+#             */
/*   Updated: 2021/08/24 11:21:46 by msessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char	*new_str;
	size_t	s_len;
	int		i;

	s_len = ft_strlen(s);
	if (s_len > n)
		s_len = n;
	new_str = malloc(sizeof(char) * (s_len + 1));
	if (!new_str)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		new_str[i] = s[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
